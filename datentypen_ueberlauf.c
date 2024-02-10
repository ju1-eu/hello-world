// datentypen_ueberlauf.c
// Datentyp überlauf
#include <limits.h>
#include <stdio.h>

int main(void) {
  // Deklaration eines unsigned short
  unsigned short uShort = USHRT_MAX - 2; // Setzen nahe am maximalen Wert

  // Ausgabe der Anfangswerte
  printf("Anfangswert von Short: %hu\n", uShort);

  // Erhöhung und Ausgabe der Werte, um Überlauf zu demonstrieren
  for (int i = 0; i < 5; i++) {
    uShort++; // Erhöhen des Werts
    printf("Aktueller Wert von uShort: %hu\n", uShort);
  }

  return 0;
}
/*
Anfangswert von uShort: 65533
Aktueller Wert von uShort: 65534
Aktueller Wert von uShort: 65535
Aktueller Wert von uShort: 0
Aktueller Wert von uShort: 1
Aktueller Wert von uShort: 2
*/
