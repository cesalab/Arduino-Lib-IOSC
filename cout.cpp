#include "Arduino.h"


void writeOutput(uint32_t var, uint8_t pinStart, uint8_t pinFinal) {
  uint32_t mask = 0x01;
  for (int i = pinStart; i <= pinFinal; i++) {
    if ((mask & var) != 0) {
      digitalWrite(i, HIGH);
    } else { 
      digitalWrite(i, LOW);
    }
    mask = mask << 1;
  }
}


void printString(uint32_t numberAddr){

  SerialUSB.print("A");  
  if(numberAddr < 0x10) SerialUSB.print('0');
  if(numberAddr < 0x100) SerialUSB.print('0');
  if(numberAddr < 0x1000) SerialUSB.print('0');
  if(numberAddr < 0x10000) SerialUSB.print('0');
  SerialUSB.print(numberAddr, HEX);  
  SerialUSB.print("_"); 
  
}
