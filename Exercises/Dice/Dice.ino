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

const int pin5 =  9; 
const int pin6 =  8;
const int pin7 = 7;

int roll;



void setup() {
  // set the digital pin as output:
  pinMode(pin1, OUTPUT);      
  pinMode(pin2, OUTPUT);   

  //Set the other output pins

  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  randomSeed(analogRead(7));
  Serial.begin(9600);

  roll = random(1,7);
}

void loop() {
  //Roll will get reset when reset button is pressed
    switch(roll){
      case 1:
         digitalWrite(pin1, HIGH);
         digitalWrite(pin2, LOW);
         digitalWrite(pin3, LOW);
         digitalWrite(pin4, LOW);
         digitalWrite(pin5, LOW);
         digitalWrite(pin6, LOW);
         Serial.print("case 1");
         break;
      case 2:
         digitalWrite(pin1, HIGH);
         digitalWrite(pin2, HIGH);
         digitalWrite(pin3, LOW);
         digitalWrite(pin4, LOW);
         digitalWrite(pin5, LOW);
         digitalWrite(pin6, LOW);
         Serial.print("case 2");
         break;
      case 3:
		 //Follow the pattern
      case 4:

      case 5:
		 //Keep following
      case 6:
         digitalWrite(pin1, HIGH);
         digitalWrite(pin2, HIGH);
         digitalWrite(pin3, HIGH);
         digitalWrite(pin4, HIGH);
         digitalWrite(pin5, HIGH);
         digitalWrite(pin6, HIGH);
         Serial.print("case 6");
         break;
  }

	//Congratulations! It should work the FIRST time
}
