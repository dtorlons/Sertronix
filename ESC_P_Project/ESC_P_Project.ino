#include "ESC_P_Data_Sender.h"

Printer printer;  /*Instance for "ESC_P_Data_Sender'Printer class*/

void setup() {
    Serial.begin(9600);
    printer.begin();
}

void loop() {
    if (Serial.available()) { 
        char receivedChar = Serial.read(); 
        Serial.print((int)receivedChar);   
        Serial.print("\t");
        Serial.print((int)receivedChar, BIN);
        Serial.println();
        printer.printChar(receivedChar); // Lo invia alla stampante
    }
}
