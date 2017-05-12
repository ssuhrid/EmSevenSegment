/*
  EmSevenSegment Library - blink

 Demonstrates the use a 4094 shift register IC to control an array of Seven Segment Display.
 
 This sketch prints "1234".

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

EmSevenSegment disp(4,'C',10,11,12);

void setup(){
}

//=============================================================//
void loop(){
  int arr[]={1,23,4}; // Numbers to be displayed
  int len[]={1,2,1}; // Number of 7-segment digitss allocated to the number
  disp.print(3,arr,len); // Print the elements in the array
}

