////////////////////////////////////////////////////////////////////////////////////
//       Digital Photoreactor Controller Slave Program Controlled by I2C          //
//                    Run this slave program on the AtTiny85.                     //      
////////////////////////////////////////////////////////////////////////////////////

#include "TinyWireS.h"                  // wrapper class for I2C slave routines

#define I2C_SLAVE_ADDR  0x26            // I2C slave address (38, 0x26), 

uint8_t master_data[1];               // global buffer to store data sent from the master.
uint8_t master_bytes;                  // global variable to number of bytes sent from the master.

const int LEDPin = 4;                  //Arduino pin 4, pin 3 on AtTiny85 pinout
const int FanPin = 1;                  //Arduino pin 1, pin 6 on AtTiny85 pinout
const int BlinkPin = 3;                //Arduino pin 3, pin 2 on AtTiny85 pinout

void setup()
{
  // initialize the TinyWireS and usiTwiSlave libraries
  TinyWireS.begin(I2C_SLAVE_ADDR);      // init I2C Slave mode

  // register the onReceive() callback function
  TinyWireS.onReceive(receiveEvent);
  
  pinMode(LEDPin, OUTPUT);   // set pin for LED PWM
  pinMode(FanPin, OUTPUT);   // set pin for Fan PWM
  pinMode(BlinkPin, OUTPUT); // set pin to blink LED
  
  TCCR0B = TCCR0B & 0b11111000 | 0b001; // sets internal timer of AtTiny85 to 31250 Hz for fast PWM for controlling fan speed
}

// Gets called when the ATtiny85 receives an I2C write slave request
void receiveEvent(uint8_t num_bytes)
{
  uint8_t i;
  
  // save the number of bytes sent from the master
  master_bytes = num_bytes;

  // store the data from the master into the data buffer
  for (i = 0; i < master_bytes; i++)
    master_data[i] = TinyWireS.receive();

  // set LED and Fan PWM duty to random byte values recieved from the master
  analogWrite(FanPin, master_data[0]);
  analogWrite(LEDPin, master_data[1]);

  // blink LED whenever data is successfuly recieved
  digitalWrite(BlinkPin, HIGH);
  delay(10);
  digitalWrite(BlinkPin, LOW);
  delay(10);

}

void loop()
{
  
}
