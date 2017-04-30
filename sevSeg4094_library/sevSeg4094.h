
#ifndef sevSeg4094_h
#define sevSeg4094_h

#include "Arduino.h"

class sevSeg4094{

  public :
    sevSeg4094(uint8_t digits,uint8_t dataPin,uint8_t clockPin,uint8_t strobePin);
    void setLeadingZeros(boolean leadingZeros);
    void writeNumbers(int nums,int num[],int len[]);
    void writeNumbers(int nums,int num[],int len[],int off);
    void createBlink(int nums, int num[],int len[],int off,int blinkDelay);
    void writeArray(int arr[]);
    void test();
  
  private:
    unsigned long _lastBlinkTime;
    uint8_t findLength(unsigned long n);
    uint8_t _digits;
    uint8_t _dataPin;
    uint8_t _clockPin;
    uint8_t _strobePin;
    boolean _leadingZeros;

};

#endif