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
byte input[250];
char b;

void setup()
{
  Serial.begin(9600);
  Wire.begin(); // join i2c bus (address optional for master)
}


void loop()
{
  int total = 0;
  if(Serial.available() > 0) { //check to see if data is available from the console
    Wire.beginTransmission(4); // transmit to device #4
    while(Serial.available() > 0 && total < 250) { //write to buffer until full no more data available
      input[total] = Serial.read();

      total ++;
    }
    Wire.write(input, total);              // sends n byte  
    Wire.endTransmission();    // stop transmitting
  }
  delay(50);
}

