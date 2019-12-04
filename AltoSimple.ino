/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
int leds[]={4,5,6,7,8,9,10,11,12,13};
int tiempoRet=400;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(leds[0], OUTPUT);
  pinMode(leds[1], OUTPUT);
  pinMode(leds[2], OUTPUT);
  pinMode(leds[3], OUTPUT);
  pinMode(leds[4], OUTPUT);
  pinMode(leds[5], OUTPUT);
  pinMode(leds[6], OUTPUT);
  pinMode(leds[7], OUTPUT);
  pinMode(leds[8], OUTPUT);
  pinMode(leds[9], OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(leds[0], HIGH);   
 digitalWrite(leds[1], HIGH);   
 digitalWrite(leds[2], HIGH);   
 digitalWrite(leds[3], HIGH); 
 digitalWrite(leds[4], HIGH);   
 digitalWrite(leds[5], HIGH); 
 digitalWrite(leds[6], HIGH);   
 digitalWrite(leds[7], HIGH); 
 digitalWrite(leds[8], HIGH);   
 digitalWrite(leds[9], HIGH); 
 delay(tiempoRet);
 digitalWrite(leds[0], LOW);   
 digitalWrite(leds[1], LOW);   
 digitalWrite(leds[2], LOW);   
 digitalWrite(leds[3], LOW); 
 digitalWrite(leds[4], LOW);   
 digitalWrite(leds[5], LOW); 
 digitalWrite(leds[6], LOW);   
 digitalWrite(leds[7], LOW); 
 digitalWrite(leds[8], LOW);   
 digitalWrite(leds[9], LOW); 
 delay(tiempoRet);
}
