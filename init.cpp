#include "Arduino.h"
#include "config.h"

void configInput(uint8_t pinStart, uint8_t pinFinal){
    //Inicializamos I/O
    for (int i = pinStart; i <= pinFinal; i++) {
        pinMode(i, INPUT);
    }
}


void configOutput(uint8_t pinStart, uint8_t pinFinal){
    //Inicializamos I/O
    for (int i = pinStart; i <= pinFinal; i++) {
        pinMode(i, OUTPUT);
        digitalWrite(i,LOW);
    }
}


void configSerialPort(){
    //como se usa modo USB en serial no hace falta indicar el bps
    SerialUSB.begin(921600); // opens Serial8 port, sets data rate to 9600 bps
    //SerialUSB.setTimeout(10);
    while (!SerialUSB);  // Wait for Arduino Serial Monitor to open
        delay(100);
    SerialUSB.println("\n" "" __DATE__ " " __TIME__);
    SerialUSB.println("Iniciando... "); 
    #ifdef DEBUG
        SerialUSB.println("MODO DEBUG HABILITADO... "); 
    #endif
}
