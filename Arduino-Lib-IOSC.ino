#include "config.h"
extern String stringSplit[];

void setup() {
    configIOInit(PINSTART, PINFINAL);
    configSerialPort();
}

void loop() {

    readCommands();
    delay(1000);
    limpiarComandos();
    
}
