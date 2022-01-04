#include "Arduino.h"

void configSerialPort(){
    SerialUSB.begin(921600); // opens Serial8 port, sets data rate to 9600 bps
    //SerialUSB.setTimeout(10);
    while (!SerialUSB);  // Wait for Arduino Serial Monitor to open
        delay(100);
    SerialUSB.println("\n" "" __DATE__ " " __TIME__);
    SerialUSB.println("Iniciando... "); 
}
