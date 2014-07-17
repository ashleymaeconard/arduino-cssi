/*
master_writer

Jon Oakley
Adapted from example
2014
Google's CSSI

Send's string from the serial input to the slave receiver.
*/

#include <Wire.h>

//Holds the data
//CODE: Declare a decent sized input buffer
char b;

void setup()
{
  Serial.begin(9600);
  //CODE: How do we join the I2C bus (look at Arduino library)
}


void loop()
{
  int total = 0;
  if(Serial.available() > 0) { //check to see if data is available from the console
	
	//CODE: begin tramsmission with device 4
    
    while(Serial.available() > 0 && total < 250) { //write to buffer until full no more data available
      input[total] = Serial.read();

      total ++;
    }
    //CODE: how would we write N bytes
    //CODE: how would we complete the transmission
  }
  //CODE: set a reasonable delay
}

