#ifndef ESC_P_Data_Sender_H
#define ESC_P_Data_Sender_H

#include <Arduino.h>

// Parallel port pin# = arduino pin#
#define   nStrobe     2
#define data_0      3
#define data_1      4
#define data_2      5
#define data_3      6
#define data_4      7
#define data_5      8
#define data_6      9
#define data_7      10
#define nAck        11
#define busy        12
#define strobeWait  2   // Microseconds to strobe for

const int dataPins[8] = {data_0, data_1, data_2, data_3, data_4, data_5, data_6, data_7};

// Classe per la gestione della stampante
class Printer {
public:
    Printer(); // Costruttore

    void begin(); // Inizializza la stampante
    void printByte(byte inByte); // Invia un byte alla stampante
    void printChar(char c); // Invia un carattere dalla seriale alla stampante
    void resetPrinter(); // Reset della stampante
};

#endif
