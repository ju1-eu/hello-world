/**
 * @file explizite_konvertierung.c
 * @brief Demonstration der expliziten Konvertierung von double zu int in C.
 *
 * Dieses Programm zeigt, wie ein Wert vom Typ double explizit in einen Wert vom
 * Typ int konvertiert wird. Es illustriert den Prozess und das Ergebnis der
 * Konvertierung, einschließlich des Verlusts von Nachkommastellen.
 */

#include <stdio.h>

/**
 * @brief Hauptfunktion, führt die Konvertierung durch und zeigt das Ergebnis.
 *
 * Deklariert eine Variable vom Typ double und weist ihr einen Wert zu. Führt
 * dann eine explizite Konvertierung (Casting) dieses Wertes zu einem int durch
 * und speichert das Ergebnis in einer int-Variablen. Schließlich werden der
 * ursprüngliche double-Wert und der konvertierte int-Wert ausgegeben.
 *
 * @return int Rückgabewert des Programms. 0 für erfolgreiches Beenden.
 */
int main(void) {
  double meinDouble = 9.87654321; // Originaler double-Wert
  int meinInt;                    // Variable für den konvertierten Wert

  // Explizite Konvertierung von double zu int
  meinInt = (int)meinDouble; // Casting

  printf("Originaler double-Wert: %f\n", meinDouble);
  printf("Konvertierter int-Wert: %d\n", meinInt);

  return 0;
}
