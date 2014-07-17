// NOTE: Pin declarations (global variables)
int lightValueResistor = 0;                            
int redPin = 13;             
int greenPin = 12;           
int bluePin = 11;    
int red, green, blue, v = 0;
         

// NOTE: This is the setup function used to initialize the Arduino
void setup()
{
    // NOTE: Begin serial communication
    Serial.begin(9600);
    
    // NOTE: Set pins to INPUT or OUTPUT mode
    pinMode(redPin, );      
    pinMode(greenPin, );
    pinMode(bluePin, );
    pinMode(lightValueResistor, );  
}

// NOTE: This is the loop function that runs when the Ardunio runs
void loop()
{
    // NOTE: This print lightValueresistor value to console
    Serial.println(analogRead(lightValueResistor));  

    // NOTE: This sets LED color based on measured brightness   
    setColor(analogRead(lightValueResistor));
           
    // DO: Delay 10 milliseconds                                     
    delay( );                                          
}

// NOTE: This is the set color method called in the loop. It sets the color of the multi-colored LED
void setColor(int lightValue)
{

  // NOTE: Switch statement to make the LED alternate between colors (using RGB values) 
  // according to the light value of the photoresistor
  
  // ANOTHER NOTE! : The light values will vary between 0 and around 800 (though it can go higher)
  //                 Pick some appropriate intervals and set LED to a different color for each
  //                 interval.

  // DO: If the light value is greater than 700, set the LED to RED
  if(lightValue >= 700){         
    red = 200;
    blue = 0;
    green = 0;

  }

  // DO: Else if the light value is between ___ and ___, set the LED to ___
  else if(lightValue <  && lightValue >= ){

  }

  // DO: Else if the light value is between ___ and ___, set the LED to ___
  else if(lightValue < && lightValue >=){ 

  }

  // DO: Else if the light value is between ___ and ___, set the LED to ___ (set blue and green to high)
  else if(){

  }

  // DO: Else if the light value is between ___ and ___, set the LED to BLUE

  // DO: Else if the light value is less than 300, set the LED to PURPLE
  
  // NOTE: Write RGB values to LED
  analogWrite(redPin, red);
  analogWrite(greenPin, green);

  // DO: Write the bluePin to blue
  analogWrite( , );  
}


