/* 
  Dice Code
  Jon Oakley
  2013
  Uses:
  Constants, Switch-statements, and modulus
  
 */

// constants won't change. Used here to 
// set pin numbers:

const int pin1 =  13;      // pins should go to sequential LEDs

   //Declare the other pins here


int roll;



void setup() {
  // set the digital pin as output:
  pinMode(pin1, OUTPUT);      

  //Set the other output pins
  
  randomSeed(analogRead(7));
  Serial.begin(9600);

  // roll a random number 
  
  }

void loop() {
  //Roll will get reset when reset button is pressed
    switch(roll){
      case 1:
         digitalWrite(pin1, HIGH);
  
      // The other lights should be off because it is 1. Set them to LOW.

         Serial.print("case 1");
         break;
      case 2:
         digitalWrite(pin1, HIGH);
         digitalWrite(pin2, HIGH);
        
      
      //Follow the pattern for 6 cases total.

  }

      //Congratulations! It should work the FIRST time
}
