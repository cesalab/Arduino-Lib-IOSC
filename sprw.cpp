#include "Arduino.h"

#define MAX_CHAR 50
#define MAX_COMMANDS 10

String incomingString;  // for incoming serial data
String stringSplit[MAX_COMMANDS] = {""};   // arrary to save values
char delimitadores[] = " ,;!()";    //elementos a excluir
char *resultado = nullptr;
char *strtok( char *str1, const char *str2 ); 

String readCommands(){
    if (SerialUSB.available() > 0){
           // read the incoming byte:
          incomingString = SerialUSB.readString() ;
          #ifdef DEBUG
              SerialUSB.print("I received: ");
              SerialUSB.println(incomingString);
          #endif
          char colle[MAX_CHAR];
          uint8_t i = 0;
          
          incomingString.toCharArray(colle, MAX_CHAR);
          resultado = strtok( colle, delimitadores );
          stringSplit [i] = resultado;
          
          while( resultado != NULL ) 
          {
              i++;
              resultado = strtok( NULL, delimitadores );
              stringSplit[i] = resultado;
          }
          //imprimir array de palabras
          for (i = 0; i < MAX_COMMANDS; i++){
              if (stringSplit[i] == "")     break;
              #ifdef DEBUG
                  SerialUSB.print("  stringSplit["); SerialUSB.print(i); SerialUSB.print("]: "); SerialUSB.println(stringSplit[i]);
              #endif
          }
          return stringSplit[0];
    }else   
          return 0; 
}

void limpiarComandos(){
    
    if (stringSplit[0] > 0){
        #ifdef DEBUG
            Serial.println("limpiando registros...");
        #endif
        for(uint8_t i = 0; i < MAX_COMMANDS; i++)  { 
            stringSplit[i] = "";    //LIMPIA REGISTRO
            //SerialUSB.print("  stringSplit["); SerialUSB.print(i); SerialUSB.print("]: "); SerialUSB.println(stringSplit[i]);
        }
    #ifdef DEBUG
        SerialUSB.println("limpiado listo...");   
    #endif  
    }

}
