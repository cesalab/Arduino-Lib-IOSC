#include "config.h"
extern String stringSplit[];

void setup() {
    configInput(PINSTART, PINFINAL);
    configSerialPort();
}

void loop() {

    readCommands();
    configInput(DATA0, DATA7);
    uint32_t b = readInput(DATA0, DATA7);
    printString(b);
    delay(1000);
    
    configOutput(ADDR0, ADDR7);
    writeOutput(0xFF, ADDR0, ADDR7);
    delay(1000);
    
    limpiarComandos();
    
}
