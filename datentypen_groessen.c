// datentypen_groessen.c
// Größe (in Bytes) der verschiedenen Datentypen
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

    // Ausgabe der Werte und Größen
    printf("Integer: %d, Größe: %zu Bytes\n", meinInteger, sizeof(meinInteger));
    printf("Char: %c, Größe: %zu Byte\n", meinChar, sizeof(meinChar));
    printf("Short: %d, Größe: %zu Bytes\n", meinShort, sizeof(meinShort));
    printf("Long: %ld, Größe: %zu Bytes\n", meinLong, sizeof(meinLong));
    printf("Long Long: %lld, Größe: %zu Bytes\n", meinLongLong, sizeof(meinLongLong));
    printf("Float: %f, Größe: %zu Bytes\n", meinFloat, sizeof(meinFloat));
    printf("Double: %f, Größe: %zu Bytes\n", meinDouble, sizeof(meinDouble));
    printf("Long Double: %Lf, Größe: %zu Bytes\n", meinLongDouble, sizeof(meinLongDouble));
    printf("Konstante: %d, Größe: %zu Bytes\n", MEINE_KONSTANTE, sizeof(MEINE_KONSTANTE));
    printf("Wert des Zeigers: %d, Größe: %zu Bytes\n", *zeigerAufInteger, sizeof(zeigerAufInteger));
    printf("Adresse des Zeigers: %p\n", (void*)zeigerAufInteger);

    return 0;
}
/*
Integer: 10, Größe: 4 Bytes
Char: A, Größe: 1 Byte
Short: 20, Größe: 2 Bytes
Long: 1000, Größe: 8 Bytes
Long Long: 50000, Größe: 8 Bytes
Float: 10.500000, Größe: 4 Bytes
Double: 20.990000, Größe: 8 Bytes
Long Double: 100.123450, Größe: 16 Bytes
Konstante: 100, Größe: 4 Bytes
Wert des Zeigers: 10, Größe: 8 Bytes
Adresse des Zeigers: 0x7ff7b0aaaff8
*/
