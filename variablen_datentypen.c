// variablen_datentypen.c
// Variablen, Datentypen, Deklaration, Initialisierung, const und Zeigern
#include <stdio.h>

int main(void) {
    // Deklaration und Initialisierung von Variablen verschiedener Datentypen
    int meinInteger = 10;
    char meinChar = 'A';
    short meinShort = 20;
    long meinLong = 1000;
    long long meinLongLong = 50000;
    float meinFloat = 10.5;
    double meinDouble = 20.99;
    long double meinLongDouble = 100.12345;

    // Deklaration einer Konstanten
    const int MEINE_KONSTANTE = 100;

    // Deklaration und Initialisierung eines Zeigers
    int *zeigerAufInteger = &meinInteger;

    // Ausgabe der Werte
    printf("Integer: %d\n", meinInteger);
    printf("Char: %c\n", meinChar);
    printf("Short: %d\n", meinShort);
    printf("Long: %ld\n", meinLong);
    printf("Long Long: %lld\n", meinLongLong);
    printf("Float: %f\n", meinFloat);
    printf("Double: %f\n", meinDouble);
    printf("Long Double: %Lf\n", meinLongDouble);
    printf("Konstante: %d\n", MEINE_KONSTANTE);
    printf("Wert des Zeigers: %d\n", *zeigerAufInteger);
    printf("Adresse des Zeigers: %p\n", (void*)zeigerAufInteger);

    return 0;
}
/*
Integer: 10
Char: A
Short: 20
Long: 1000
Long Long: 50000
Float: 10.500000
Double: 20.990000
Long Double: 100.123450
Konstante: 100
Wert des Zeigers: 10
Adresse des Zeigers: 0x7ff7b00c1ff8
*/
