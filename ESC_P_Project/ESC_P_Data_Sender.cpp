#include "ESC_P_Data_Sender.h"

// Costruttore della classe Printer
Printer::Printer() {}

// Metodo per inizializzare la stampante
void Printer::begin() {
    pinMode(nStrobe, OUTPUT);
    digitalWrite(nStrobe, HIGH);

    for (int i = 0; i < 8; i++) {
        pinMode(dataPins[i], OUTPUT);
    }

    pinMode(nAck, INPUT);
    pinMode(busy, INPUT);
    pinMode(13, OUTPUT);

    delay(1000);
    resetPrinter();
    Serial.println("Initialization completed...");
}

// Metodo per inviare un byte alla stampante
void Printer::printByte(byte inByte) {
    while (digitalRead(busy) == HIGH) {
        Serial.println("OFF LINE");
    }

    for (int i = 0; i < 8; i++) {
        digitalWrite(dataPins[i], bitRead(inByte, i));
    }

    digitalWrite(nStrobe, LOW);
    delayMicroseconds(strobeWait);
    digitalWrite(nStrobe, HIGH);

    while (digitalRead(busy) == HIGH) {
        // Attende che busy diventi LOW
    }
}

// Metodo per inviare un carattere ricevuto dalla seriale alla stampante
void Printer::printChar(char c) {
    printByte((byte)c);
}

// Metodo per resettare la stampante
void Printer::resetPrinter() {
    printByte(27); // ESC
    printByte('@'); // Reset printer
}
