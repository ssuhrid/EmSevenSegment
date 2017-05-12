/*
  EmSevenSegment Library - blink

 Demonstrates the use a 4094 shift register IC to control an array of Seven Segment Display.
 
 This sketch runs a code that runs print the digits 000.. to 999.. infinitely.
 This sketch is meant strictly for common anode seven segment display.
 
  The circuit:
 * 4094 Data pin to digital pin 10
 * 4094 Clock pin to digital pin 11
 * 4094 Strobe pin to digital pin 12

 Library originally released 17 May 2017
 by Suhrid Srivastava

 This example code is in the public domain. 
 
*/

// include the library code:

#include <EmSevenSegment.h>

EmSevenSegment disp(4,'A',10,11,12);

void setup(){
}

//=============================================================//
void loop(){
  disp.test();
}

