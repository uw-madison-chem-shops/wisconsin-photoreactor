#include <Wire.h>

#define INPUT_SIZE 100  // TODO: make this a reasonable value
#define sep " "
char input[INPUT_SIZE + 1];

char c_address = '0';
char c_led = '0';
char c_fan = '0';
int address = 0;
int led = 0;
int fan = 0;

void setup() {
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  Wire.begin(); 
  Serial.begin(9600);
}

void loop() {
}

void scan() {
  Serial.println("scanning!");
  byte error, address;

  for(address = 1; address < 127; address++ ) 
  {
    // The i2c_scanner uses the return value of
    // the Write.endTransmisstion to see if
    // a device did acknowledge to the address.
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0)
    {
      Serial.print("I2C device found at address ");
      Serial.println(address);
    } 
  }
  
}

void serialEvent() {  // occurs whenever new data comes in the hardware serial RX
  // read serial into input char array
  byte size = Serial.readBytesUntil('\n', input, INPUT_SIZE);
  input[size] = 0;
  // parse input
  char *c_address = strtok(input, sep);
  char *c_led = strtok(0, sep);
  char *c_fan = strtok(0, sep);
  // convert input
  address = atoi(c_address);
  led = atoi(c_led);
  fan = atoi(c_fan);
  // scan if address is less than zero
  if (address < 0) {
    scan();
  }
  // write to peripheral
  uint8_t buf[1];
  buf[0] = fan;
  buf[1] = led;
  Wire.beginTransmission(address);
  Wire.write(buf, 2);
  Wire.endTransmission();
}

void serialEventRun(void) {
  // this runs inside of the main loop, essentially
  if (Serial.available()) serialEvent();
}
