/**
 * @file datentypen_ueberlauf.c
 * @brief Demonstration des Überlaufs bei einem unsigned short Datentyp.
 *
 * Dieses Programm zeigt, was passiert, wenn ein unsigned short Datentyp
 * seinen maximalen Wert überschreitet und wieder bei 0 anfängt. Es setzt
 * den Wert nahe am maximalen Wert, erhöht ihn in einer Schleife und zeigt
 * den Überlauf.
 */

#include <limits.h>
#include <stdio.h>

/**
 * @brief Hauptfunktion, demonstriert den Überlauf bei einem unsigned short.
 *
 * Beginnt mit einem Wert nahe dem maximalen Wert für unsigned short und
 * erhöht diesen in einer Schleife mehrmals, um zu zeigen, wie der Wert nach
 * Erreichen des maximalen Wertes auf 0 zurückgesetzt wird und von vorne
 * beginnt.
 *
 * @return int Rückgabewert des Programms. 0 für erfolgreiches Beenden.
 */
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
