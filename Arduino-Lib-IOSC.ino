#include "config.h"

void setup() {
    configSerialPort();
    #ifdef DEBUG
        SerialUSB.println("MODO DEBUG... "); 
    #endif
}

void loop() {

    readCommands();
    delay(1000);
    limpiarComandos();
    
}
