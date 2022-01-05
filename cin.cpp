#include "Arduino.h"

uint32_t readInput(uint8_t pinStart, uint8_t pinFinal) {
  uint32_t data = 0;
  uint32_t mask = 0x1;
  for (int i = pinStart; i <= pinFinal; i++) {
    if (digitalRead(i) == HIGH) {
      data |= mask;
    }
    mask = mask << 1;
  }
  return data;
}
