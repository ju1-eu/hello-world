/**
 * @file datentypen_genauigkeit_berechnen.c
 * @brief Demonstration der Genauigkeit verschiedener Fließkommadatentypen.
 *
 * Dieses Programm zeigt, wie die Präzision der Berechnung von
 * Fließkommazahlen mit verschiedenen Datentypen variiert: float, double und
 * long double.
 */

#include <stdio.h>

/**
 * @brief Hauptfunktion des Programms.
 *
 * Initialisiert Variablen mit Fließkommawerten und führt Divisionen durch,
 * um die Präzision der Datentypen float, double und long double zu
 * demonstrieren.
 *
 * @return Exit-Status des Programms.
 */
int main(void) {
    // Initialisierung von Variablen verschiedener Datentypen
    float floatValue = 1.23456789f;  ///< Float mit begrenzter Präzision
    double doubleValue =
        1.234567890123456789;  ///< Double mit höherer Präzision
    long double longDoubleValue =
        1.2345678901234567890123456789L;  ///< Long double mit potenziell
                                          ///< höchster Präzision

    // Ausgabe der originalen Werte
    printf("Original float Wert: %.10f\n", floatValue);
    printf("Original double Wert: %.20lf\n", doubleValue);
    printf("Original long double Wert: %.30Lf\n", longDoubleValue);

    // Berechnungen
    float floatResult = floatValue / 3.0f;  ///< Ergebnis der Division als float
    double doubleResult =
        doubleValue / 3.0;  ///< Ergebnis der Division als double
    long double longDoubleResult =
        longDoubleValue / 3.0L;  ///< Ergebnis der Division als long double

    // Ausgabe der Ergebnisse
    printf("Ergebnis als float: %.10f\n", floatResult);
    printf("Ergebnis als double: %.20lf\n", doubleResult);
    printf("Ergebnis als long double: %.30Lf\n", longDoubleResult);

    return 0;
}
