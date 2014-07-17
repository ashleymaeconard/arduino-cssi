Google CSSI Arduino Workshop 2014
============================
Tutorials and code for the four workshop project options.

Die
-----------
The purpose of this project is to simulate a six sided die by programming six different LED lights

1.  Set up your hardware
2.  Connect ground wire to blue bus
3.  Connect pins 8-13 to the positive ends of the LEDs 
4.  Use 270 ohm resistors to connect the negative ends to ground
5.  We must set our LED lights to specific pins in the Arduino. One LED will be set to pin 8, one LED is set to pin 9,	and so on.
6.  Next we will set up the main body of die.
    * Case #1: Just the first pin is on
    * Case #2: Just the first two pins are on
    * Case #3: Just the first three pins are on
    * Case #4: The first four pins are on
    * Case #5: The first five pins are on
    * Case #6: All the pins are on
7.  The command for turning a light on is: `digitalWrite(pin1, HIGH)`,and the command for turning it off is: `digitalWrite(pin2, LOW)`.
8.  Press the reset button every time you wish to reroll the dice.

Distance Detection
------------------
The purpose of this project is to program a multi-color LED, which changes colors as your hand approaches.

This multi-color light color changes when passing different voltages. Each of the three LEDs share a common cathode (negative) and there are three separate positives. 


1. Set up hardware. Make sure the groud pin of the LED is connected to ground on the Arduino.
2. Read through the declared variables, and locate digital pins 9, 10 and 11, and analog pin 0 on the Arduino.
3. The `setup()` method will begin the serial communication between the Arduino, and the computer. In the void setup() method,  assign the OUTPUT(s) and INPUT(s) using pinMode, for the red, green, blue and photo-resistor pins.
4. The `loop()` method is the part of the code that will repeat continuously. In the void `loop()` method, set the time delay in milliseconds. NOTICE that the timing always operates in milliseconds, and not seconds. 
5. Now we will set the colors of the multi-color LED. The colors change based on the reduction in voltage. As the digital number representing the measured voltage changes, the colors change from red, to yellow, to green, to turquoise, to blue, and to purple. 
6.  Lastly, the `analogWrite()` function writes the color values to the LED. Insert the inputs for the blue color.   

Party Lights
-----
Prerequisite: Dice

1. Connect the two wires from the 3.5mm audio jack to two buses on the breadboard. 
2. Place three LEDS sequentially into the breadboard (with two dots spacing in between each LED).
3. Connect the negative leads of the LEDs to the ground bus with 270 Ohm resistors. (Place a resistor below each LED on the bread board.) 
   Be careful with polarity. (Bonus question: How does polarity matter?)
4. Connect the positive terminals of the LEDs to pins 11-13 with wire.
5. Connect the ground pin of the Arduino to the ground bus of the breadboard.
6. Connect one of the two buses that the speaker is attached to to pin A0 of the arduino.
7. Determine what voltage would make a good limit to turn music on. (Does this match the ceiling set in the code?)
8. Play music through 8 ohm speakers by touching the wires together.

Chat Protocol
----------------
Hardware:

1. Connect the ground pins of both arduinos together with a wire.
2. Connect the A4 pins and the A5 pins, respectively, on both arduinos.

For the Master Writer:

1. In the "Master Writer" file, in the setup, figure out the command to join the I2C bus (look at Arduino library).
2. Figure out how to write "N" bytes to the I2C bus. Do this in the "Master Writer" loop.
3. Figure out how to complete the transmission in the "Master Writer" loop.
4. Set a reasonable delay at the end of the "Master Writer" loop.

For the Slave Receiver:

1. Join the I2C bus as device 4 in the setup.
2. Register the receive event in the setup.
3. In the "Slave Receiver" loop, set a reasonable delay.
4. In the receive event function, set the "while loop" parameters. Hint: you might have seen this before.
5. In the while loop in the receive event function, read a byte from the I2C bus.
