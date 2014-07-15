/*
slave_receiver

Jon Oakley
Adapted from example
2014
Google's CSSI

receives string from the master and outputs it to the console.
*/


#include <Wire.h>

void setup()
{
  //CODE: Join the bus as device 4
  //CODE: Register the receive event
  Serial.begin(9600);           // start serial for output
  //CODE: Print a nice message to the serial port telling the user what the application does
}

void loop()
{
	//CODE: Set a reasonable delay
}

// function that executes whenever data is received from master
// this function is registered as an event, see setup()
void receiveEvent(int howMany)
{
  while(0 < Wire.available()) // loop through all but the last
  {
    //CODE: Read a byte from the I2C bus
    Serial.print(c);         // print the character
  }
  Serial.println("");
}
