////////////////////////////////////////////////////////////////////////////////////
// I2C test program for Digital Photoreactor Controller using TinyWireS library   //
//                    Run this Master program on an Arduino Uno.                  //
////////////////////////////////////////////////////////////////////////////////////
// This test program is adapted from the TinyWireS stress test program            //
// developed by Scott Hartog: https://github.com/rambo/TinyWire                   //
//                                                                                //
// The master program picks a random number of bytes between 1 and 12.            //
// It then sends that many bytes of randomd data to the AtTiny85 slave.           //
// Then, the master reads that same number of bytes back from the slave.          //
// The recieved data is then compared to the original transmitted data.           //
// The results of this comparison are displayed  in the serial monitor.           //
//  The process is then looped.                                                   //
//                                                                                //
// BREADBOARD SETUP:                                                              //
// Arduino Uno R3 (D18/SDA) = I2C SDA                                             //
//     connect to SDA on slave with external pull-up (~4.7K)                      //
// Arduino Uno R3 (D19/SCL) = I2C SCL                                             //
//     connect to SCL on slave with external pull-up (~4.7K)                      //
// Arduino Uno R3 (D2)                                                            //
//     connect to !RST on slave                                                   //
//     Can alternatively connect !RST on slave to the Ardiuno "!RESET" pin        //
//                                                                                //
////////////////////////////////////////////////////////////////////////////////////

#include <Wire.h>

#define I2C_SLAVE_ADDR  0x26            // i2c slave address (38, 0x26)

uint16_t count = 0;       // total number of passes so far
uint16_t error_count = 0; // total errors encountered so far

char c_buf[64]; // for creating messages

void setup()
{

  // init the serial port
  Serial.begin(9600);

  // init the Wire object (for I2C)
  Wire.begin(); 
  
  // wait for slave to finish any init sequence
  delay(2000);
}

void loop()
{
  uint8_t i;
  uint8_t req_rtn;       // num bytes returned by requestFrom() call
  uint8_t rand_byte_count;
  uint8_t out_rand[16];  // data written from master
  uint8_t in_rand[16];   // data read back from slave

  bool mismatch;

  // count total number of request
  count++;

  // compute random number of bytes for this pass
  rand_byte_count = random(16) + 1;

  // force the first three requests to be small so that the tx buffer doesn't overflow
  // instantly and the user can see at least one successful transaction and some
  // mismtaches before the usiTwiSlave.c library hangs on the line "while ( !txCount );".
  if (count <= 3) rand_byte_count = 2;

  // generate, save, and send N random byte values
  Wire.beginTransmission(I2C_SLAVE_ADDR);
  for (i = 0; i < rand_byte_count; i++)
    Wire.write(out_rand[i] = random(256));
  Wire.endTransmission();
  
  // delay 20 milliseconds to accomodate slave onReceive() callback
  // function. The actual time that slave takes is application dependent, but
  // just storing the master's transmitted data does not take
  // anywhere near 20ms.
  delay(20);
  
  // read N bytes from slave
  req_rtn = Wire.requestFrom(I2C_SLAVE_ADDR, (int)rand_byte_count);      // Request N bytes from slave
  for (i = 0; i < req_rtn; i++)
    in_rand[i] = Wire.read();

  // compare in/out data values
  mismatch = false;
  for (i = 0; i < rand_byte_count; i++)
    mismatch = mismatch || (out_rand[i] != in_rand[i]);

  // increment the error counter if the number of byte variables don't match or
  // if the data itself doesn't match
  if (mismatch || (rand_byte_count != req_rtn)) 
  {
    error_count++;
  }

  // The rest of the program just displays the results to the serial port
  
  // display total requests so far and error count so far
  snprintf(c_buf, sizeof(c_buf), "req: %3d,err: %3d", count, error_count);
  Serial.println(c_buf);

  // display the random byte count, the number of bytes read back, and "MATCH"/"MISMATCH"
  snprintf(c_buf, sizeof(c_buf), "size: %2d/%2d,%s", rand_byte_count, req_rtn, rand_byte_count != req_rtn?"MISMATCH  <<--- !!!":"MATCH");
  Serial.println(c_buf);
  
  // display whether the data compare matched or mismatched
  snprintf(c_buf, sizeof(c_buf), "data: %s", mismatch?"MISMATCH  <<--- !!!":"MATCH");
  Serial.println(c_buf);

  // send up to three tx/rx bytes so that random data can be
  // visually verified
  if (rand_byte_count >= 1)
  {
    snprintf(c_buf, sizeof(c_buf), "rand[0]: %02x/%02x", out_rand[0], in_rand[0]);
    Serial.println(c_buf);
  }

  if (rand_byte_count >= 2)
  {
    snprintf(c_buf, sizeof(c_buf), "rand[1]: %02x/%02x", out_rand[1], in_rand[1]);
    Serial.println(c_buf);
  }

  if (rand_byte_count >= 3)
  {
    snprintf(c_buf, sizeof(c_buf), "rand[2]: %02x/%02x", out_rand[2], in_rand[2]);
    Serial.println(c_buf);
  }

  // delay 1 second so user can watch results
  delay(1000);
}
