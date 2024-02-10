// explizite_konvertierung.c
/*
Originaler double-Wert: 9.876543
Konvertierter int-Wert: 9
*/
#include <stdio.h>

int main(void) {
    double meinDouble = 9.87654321;
    int meinInt;

    // Explizite Konvertierung von double zu int
    meinInt = (int)meinDouble; // Casting

    printf("Originaler double-Wert: %f\n", meinDouble);
    printf("Konvertierter int-Wert: %d\n", meinInt);

    return 0;
}
