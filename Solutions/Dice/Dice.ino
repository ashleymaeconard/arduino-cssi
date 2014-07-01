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
const int pin2 =  12; 
const int pin3 =  11;
const int pin4 =  10;      
const int pin5 =  9; 
const int pin6 =  8;
int roll;
void setup() {
  // set the digital pin as output:
  pinMode(pin1, OUTPUT);      
  pinMode(pin2, OUTPUT);   
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);      
  pinMode(pin5, OUTPUT);   
  pinMode(pin6, OUTPUT);

  roll = random(1,6);
}

void loop()
{
  //Roll will get reset when reset button is pressed
    switch(roll){
      case 1:
         digitalWrite(pin1, HIGH);
         digitalWrite(pin2, LOW);
         digitalWrite(pin3, LOW);
         digitalWrite(pin4, LOW);
         digitalWrite(pin5, LOW);
         digitalWrite(pin6, LOW);
         break;
      case 2:
         digitalWrite(pin1, HIGH);
         digitalWrite(pin2, HIGH);
         digitalWrite(pin3, LOW);
         digitalWrite(pin4, LOW);
         digitalWrite(pin5, LOW);
         digitalWrite(pin6, LOW);
         break;
      case 3:
         digitalWrite(pin1, HIGH);
         digitalWrite(pin2, HIGH);
         digitalWrite(pin3, HIGH);
         digitalWrite(pin4, LOW);
         digitalWrite(pin5, LOW);
         digitalWrite(pin6, LOW);
         break;
      case 4:
         digitalWrite(pin1, HIGH);
         digitalWrite(pin2, HIGH);
         digitalWrite(pin3, HIGH);
         digitalWrite(pin4, HIGH);
         digitalWrite(pin5, LOW);
         digitalWrite(pin6, LOW);
         break;
      case 5:
         digitalWrite(pin1, HIGH);
         digitalWrite(pin2, HIGH);
         digitalWrite(pin3, HIGH);
         digitalWrite(pin4, HIGH);
         digitalWrite(pin5, HIGH);
         digitalWrite(pin6, LOW);
         break;
      case 6:
         digitalWrite(pin1, HIGH);
         digitalWrite(pin2, HIGH);
         digitalWrite(pin3, HIGH);
         digitalWrite(pin4, HIGH);
         digitalWrite(pin5, HIGH);
         digitalWrite(pin6, HIGH);
         break;
    
  }
}
