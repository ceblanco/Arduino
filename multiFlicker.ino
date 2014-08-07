//Multiple LED flicker by gotcha (2010)
// http://www.instructables.com/id/Flicker-up-to-6-LEDs-with-Arduino
// Modified to flicker 6 LEDs, adjusted flicker variation
//
//
#include   <TrueRandom.h>   //Include the TrueRandom Library

int ledPin1 = 8; //Set the number of LEDs you use.
int ledPin2 = 9;
int ledPin3 = 10;
int ledPin4 = 11;
int ledPin5 = 12;
int ledPin6 = 13;
//int ledPin4 = 6;
//You can use up to 6 LED pins

void setup()
{
pinMode(ledPin1, OUTPUT); //Sets the LED pins as output pins.
pinMode(ledPin2, OUTPUT); //Use the same pins used above
pinMode(ledPin3, OUTPUT);
pinMode(ledPin4, OUTPUT);
pinMode(ledPin5, OUTPUT);
pinMode(ledPin6, OUTPUT);
}

void loop()
{ //Sets a random value of LED voltage in the range of 0V - 5V with PWM
//TrueRandom.random(0,255)
analogWrite(ledPin1, 125+TrueRandom.random(0,100)); //Use the same pins used above
analogWrite(ledPin2, 125+TrueRandom.random(0,100));
analogWrite(ledPin3, 125+TrueRandom.random(0,100));
analogWrite(ledPin4, 125+TrueRandom.random(0,100));
analogWrite(ledPin5, 125+TrueRandom.random(0,100));
analogWrite(ledPin6, 125+TrueRandom.random(0,100));
delay(TrueRandom.random(40,70)); //Limits the speed.
}
