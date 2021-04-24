#include <Wire.h>

#define I2C_SLAVE_ADDR  0x26            // I2C slave address (38, 0x26)

void setup()
{
  pinMode(A4, OUTPUT);
  pinMode(A5, OUTPUT);
  // init the Wire object
  Wire.begin(); 
  
  // wait for slave to finish any init sequence
  delay(2000);

  Serial.begin(9600);
}

void loop()
{
  for( int a=10; a<=255; a++ ){
  //generate buffer containing data to send via I2C
  uint8_t buf[1];
  buf[0] = 255-a;  // adjusting this byte changes fan speed. Can be adjusted from 0 to 256.
  buf[1] = a;  // adjusting this byte changes LED intensity. Can be adjusted from 0 to 256. 
  Serial.println(int(buf));

  // send buffer 
  Wire.beginTransmission(I2C_SLAVE_ADDR);
  Wire.write(buf, 2);
  Wire.endTransmission();
  
  // delay 20 milliseconds to accomodate slave onReceive()
  delay(20);

  /////////////////////// WHY DO I NEED THIS PART?//////////////////////////
  Wire.requestFrom(I2C_SLAVE_ADDR, 1);
  
  // delay 1 second so user can watch results
  delay(50);
  }
}
