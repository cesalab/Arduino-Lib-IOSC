#include "config.h"
extern String stringSplit[];
uint32_t counterOp = 0;

void setup() {
    configInput(PINSTART, PINFINAL);
    configSerialPort();
}

void loop() {
    printNumberOp(counterOp);
    readCommands();
    configInput(DATA0, DATA7);
    uint32_t b = readInput(DATA0, DATA7);
    printAddr(b);
    delay(1000);
    
    configOutput(ADDR0, ADDR7);
    writeOutput(0xFF, ADDR0, ADDR7);
    delay(1000);
    writeOutput(0x00, ADDR0, ADDR7);
    delay(1000);
    
    limpiarComandos();
    counterOp++;
    SerialUSB.println(); 
    
}
