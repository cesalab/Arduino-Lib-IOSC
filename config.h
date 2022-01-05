#ifndef config_h
#define config_h

#define ENABLE    HIGH
#define DISABLE   LOW

#define DEBUG     ENABLE
#define TEENSY2   
//#define TEENSY4   

#ifdef TEENSY2
#define PINSTART  0
#define PINFINAL  45
#define ADDR0     0
#define ADDR1     1
#define ADDR2     2
#define ADDR3     3
#define ADDR4     4
#define ADDR5     5
#define ADDR6     6
#define ADDR7     7
#define ADDR8     8
#define ADDR9     9
#define ADDR10    10
#define ADDR11    11
#define ADDR12    12
#define ADDR13    13
#define ADDR14    14
#define ADDR15    15
#define ADDR16    16
#define ADDR17    17
#define ADDR18    18
#define ADDR19    19
#define DATA0     20
#define DATA1     21
#define DATA2     22
#define DATA3     23
#define DATA4     24
#define DATA5     25
#define DATA6     26
#define DATA7     27
#define A138Pin   28
#define B138Pin   29
#define C138Pin   30
#define G2APin    31
#define G2BPin    32
#define G1Pin     33
#define RPPin     38
#define OEPin     39
#define WEPin     40
#endif

#ifdef TEENSY4
#define PINSTART  0
#define PINFINAL  54
#define ADDR0     0
#define ADDR1     1
#define ADDR2     2
#define ADDR3     3
#define ADDR4     4
#define ADDR5     5
#define ADDR6     6
#define ADDR7     7
#define ADDR8     8
#define ADDR9     9
#define ADDR10    10
#define ADDR11    11
#define ADDR12    12
#define ADDR13    13
#define ADDR14    14
#define ADDR15    15
#define ADDR16    16
#define ADDR17    17
#define ADDR18    18
#define ADDR19    19
#define RPPin     20
#define OEPin     21
#define WEPin     22
#define DATA0     24
#define DATA1     25
#define DATA2     26
#define DATA3     27
#define DATA4     28
#define DATA5     29
#define DATA6     30
#define DATA7     31
#define A138Pin   36
#define B138Pin   37
#define C138Pin   38
#define G2APin    39
#define G2BPin    40
#define G1Pin     41
#endif

//Init
void configInput(uint8_t , uint8_t);
void configOutput(uint8_t , uint8_t);
void configSerialPort();

//sprw
String readCommands();
void limpiarComandos();

//cin
uint32_t readInput(uint8_t, uint8_t);


//cout
void writeOutput(uint32_t , uint8_t , uint8_t );
void printString(uint32_t);


#endif
