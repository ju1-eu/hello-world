// implizite_konvertierung.c
/*
Int-Wert: 5
Float-Wert: 6.700000
Summe: 11.700000
*/
#include <stdio.h>

int main(void) {
    int meinInt = 5;
    float meinFloat = 6.7;
    float summe;

    // Implizite Konvertierung von int zu float während der Addition
    summe = meinInt + meinFloat; // meinInt wird implizit zu float konvertiert

    printf("Int-Wert: %d\n", meinInt);
    printf("Float-Wert: %f\n", meinFloat);
    printf("Summe: %f\n", summe);

    return 0;
}
