/**
 * @file implizite_konvertierung.c
 * @brief Demonstration der impliziten Konvertierung in C.
 *
 * Dieses Programm demonstriert die implizite Konvertierung von int zu float
 * während der Addition eines int- und eines float-Wertes. Es zeigt, wie C
 * automatisch einen Datentyp in einen anderen konvertiert, wenn es für die
 * Operation erforderlich ist, um Typinkompatibilitäten zu vermeiden.
 */

#include <stdio.h>

/**
 * @brief Hauptfunktion, führt die Addition durch und zeigt die implizite
 * Konvertierung.
 *
 * Deklariert eine int- und eine float-Variable und addiert diese. Die
 * int-Variable wird dabei implizit zu einem float konvertiert, um die Addition
 * korrekt durchführen zu können. Anschließend werden der ursprüngliche
 * int-Wert, der float-Wert und das Ergebnis der Addition ausgegeben.
 *
 * @return int Rückgabewert des Programms. 0 für erfolgreiches Beenden.
 */
int main(void) {
    int meinInt = 5;        // Originaler int-Wert
    float meinFloat = 6.7;  // Originaler float-Wert
    float summe;            // Variable für die Summe

    // Implizite Konvertierung von int zu float während der Addition
    summe = meinInt + meinFloat;  // meinInt wird implizit zu float konvertiert

    printf("Int-Wert: %d\n", meinInt);
    printf("Float-Wert: %f\n", meinFloat);
    printf("Summe: %f\n", summe);

    return 0;
}
