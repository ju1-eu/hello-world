// datentypen_genauigkeit_berechnen.c
/*
// https://www.wolframalpha.com/
1.23456789 / 3 für `float` = 0.41152263,
1.234567890123456789 / 3 für `double` = 0.411522630041152263
1.2345678901234567890123456789 / 3 für `long double` = 0.4115226300411522630041152263
// C Programm
Original float Wert: 1.2345678806
Original double Wert: 1.23456789012345669043
Original long double Wert: 1.234567890123456788986112953044
Ergebnis als float: 0.4115226269 // C printf auf MacOS
                   0.41152263   // Wolfram Alpha
                   0.411522627  // Debug lldb
Ergebnis als double: 0.41152263004115224865 // C printf auf MacOS
                     0.411522630041152263   // Wolfram Alpha
                     0.41152263004115225    // Debug lldb
Ergebnis als long double: 0.411522630041152262986335966244   // C printf auf MacOS
                          0.4115226300411522630041152263     // Wolfram Alpha
                          0.411522630041152262986            // Debug lldb
*/
#include <stdio.h>

int main(void) {
    // Initialisierung von Variablen verschiedener Datentypen
    float floatValue = 1.23456789f; // Float mit begrenzter Präzision
    double doubleValue = 1.234567890123456789; // Double mit höherer Präzision
    long double longDoubleValue = 1.2345678901234567890123456789L; // Long double mit potenziell höchster Präzision

    // Ausgabe der originalen Werte
    printf("Original float Wert: %.10f\n", floatValue);
    printf("Original double Wert: %.20lf\n", doubleValue);
    printf("Original long double Wert: %.30Lf\n", longDoubleValue);

    // Berechnungen
    float floatResult = floatValue / 3.0f;
    double doubleResult = doubleValue / 3.0;
    long double longDoubleResult = longDoubleValue / 3.0L;

    // Ausgabe der Ergebnisse
    printf("Ergebnis als float: %.10f\n", floatResult);
    printf("Ergebnis als double: %.20lf\n", doubleResult);
    printf("Ergebnis als long double: %.30Lf\n", longDoubleResult);

    return 0;
}
