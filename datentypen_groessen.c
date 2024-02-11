/**
 * @file datentypen_groessen.c
 * @brief Größe (in Bytes) der verschiedenen Datentypen.
 */

#include <stdio.h>

/**
 * @brief Hauptfunktion, zeigt die Größe verschiedener Datentypen in Bytes.
 *
 * Deklariert Variablen verschiedener Datentypen und einen Zeiger, initialisiert
 * diese und gibt ihre Werte sowie ihre Größen in Bytes aus.
 * Demonstrationszwecke für die Verwendung von sizeof.
 *
 * @return int Rückgabewert des Programms. 0 für erfolgreiches Beenden.
 */
int main(void) {
  // Deklaration und Initialisierung von Variablen verschiedener Datentypen
  int meinInteger = 10;           ///< Ganzzahlwert.
  char meinChar = 'A';            ///< Zeichenwert.
  short meinShort = 20;           ///< Kurze Ganzzahl.
  long meinLong = 1000;           ///< Lange Ganzzahl.
  long long meinLongLong = 50000; ///< Sehr lange Ganzzahl.
  float meinFloat = 10.5;         ///< Fließkommazahl (einfache Genauigkeit).
  double meinDouble = 20.99;      ///< Fließkommazahl (doppelte Genauigkeit).
  long double meinLongDouble =
      100.12345; ///< Fließkommazahl (erweiterte Genauigkeit).

  // Deklaration einer Konstanten
  const int MEINE_KONSTANTE = 100; ///< Konstante Ganzzahl.

  // Deklaration und Initialisierung eines Zeigers
  int *zeigerAufInteger = &meinInteger; ///< Zeiger auf eine Ganzzahl.

  // Ausgabe der Werte und Größen
  printf("Integer: %d, Größe: %zu Bytes\n", meinInteger, sizeof(meinInteger));
  printf("Char: %c, Größe: %zu Byte\n", meinChar, sizeof(meinChar));
  printf("Short: %d, Größe: %zu Bytes\n", meinShort, sizeof(meinShort));
  printf("Long: %ld, Größe: %zu Bytes\n", meinLong, sizeof(meinLong));
  printf("Long Long: %lld, Größe: %zu Bytes\n", meinLongLong,
         sizeof(meinLongLong));
  printf("Float: %f, Größe: %zu Bytes\n", meinFloat, sizeof(meinFloat));
  printf("Double: %f, Größe: %zu Bytes\n", meinDouble, sizeof(meinDouble));
  printf("Long Double: %Lf, Größe: %zu Bytes\n", meinLongDouble,
         sizeof(meinLongDouble));
  printf("Konstante: %d, Größe: %zu Bytes\n", MEINE_KONSTANTE,
         sizeof(MEINE_KONSTANTE));
  printf("Wert des Zeigers: %d, Größe: %zu Bytes\n", *zeigerAufInteger,
         sizeof(zeigerAufInteger));
  printf("Adresse des Zeigers: %p\n", (void *)zeigerAufInteger);

  return 0;
}
