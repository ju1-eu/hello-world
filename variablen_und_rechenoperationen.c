/**
 * @file variablen_und_rechenoperationen.c
 * @brief Demonstration der Verwendung von Variablen und grundlegenden
 * arithmetischen Operationen in C.
 *
 * Dieses Programm deklariert und initialisiert verschiedene Arten von Variablen
 * und führt grundlegende arithmetische Operationen wie Addition,
 * Multiplikation, Division (einschließlich Fließkommadivision), Inkrement,
 * Dekrement und Modulo-Operation durch. Es zeigt, wie diese Operationen
 * durchgeführt und die Ergebnisse ausgegeben werden.
 */

#include <stdio.h>

/**
 * @brief Hauptfunktion, die arithmetische Operationen mit Variablen
 * demonstriert.
 *
 * Führt verschiedene arithmetische Operationen durch, einschließlich Addition,
 * Multiplikation mit Zuweisung, Fließkommadivision, Inkrement- und
 * Dekrement-Operationen, sowie die Modulo-Operation und gibt die Ergebnisse
 * aus. Demonstriert die Syntax für diese Operationen in C.
 *
 * @return int Rückgabestatus des Programms. Gibt 0 zurück, was eine
 * erfolgreiche Ausführung anzeigt.
 */
int main(void) {
  // Deklaration und Initialisierung von Variablen
  int zaehler = 5; ///< Zählervariable.
  float durchschnittsTemperatur =
      23.5f;     ///< Fließkommavariable für die durchschnittliche Temperatur.
  int summe = 0; ///< Integer-Variable für die Summe.
  float division = 0.0f; ///< Fließkommavariable für das Divisionsergebnis.
  int produkt = 0;       ///< Integer-Variable für das Produkt.

  // Einfache Addition
  summe = zaehler + 10; // 5 + 10
  printf("Summe: %d\n", summe);

  // Multiplikation und Additionszuweisung
  produkt = zaehler * 3; // 5 * 3
  produkt += 2;          // produkt + 2
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
