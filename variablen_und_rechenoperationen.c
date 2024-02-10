// variablen_und_rechenoperationen.c
#include <stdio.h>

int main(void) {
    // Deklaration und Initialisierung von Variablen
    int zaehler = 5;
    float durchschnittsTemperatur = 23.5f;
    int summe = 0;
    float division = 0.0f;
    int produkt = 0;

    // Einfache Addition
    summe = zaehler + 10; // 5 + 10
    printf("Summe: %d\n", summe);

    // Multiplikation und Additionszuweisung
    produkt = zaehler * 3; // 5 * 3
    produkt += 2; // produkt + 2
    printf("Produkt nach Additionszuweisung: %d\n", produkt);

    // Fließkommadivision
    division = durchschnittsTemperatur / (float)zaehler; // 23.5 / 5
    printf("Division: %.2f\n", division);

    // Inkrement und Dekrement
    zaehler++; // Erhöht zaehler um 1
    printf("Zaehler nach Inkrement: %d\n", zaehler);
    zaehler--; // Verringert zaehler um 1
    printf("Zaehler nach Dekrement: %d\n", zaehler);

    // Modulo-Operation
    int rest = zaehler % 2; // Rest von zaehler / 2
    printf("Rest: %d\n", rest);

    return 0;
}
/*
Summe: 15
Produkt nach Additionszuweisung: 17
Division: 4.70
Zaehler nach Inkrement: 6
Zaehler nach Dekrement: 5
Rest: 1
*/
