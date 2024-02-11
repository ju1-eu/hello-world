/**
 * @file variablen_datentypen.c
 * @brief Demonstration von Variablen, Datentypen, Deklaration, Initialisierung,
 * Konstanten und Zeigern in C.
 *
 * Dieses Programm deklariert und initialisiert Variablen unterschiedlicher
 * Datentypen, eine Konstante und einen Zeiger. Anschließend werden die Werte
 * und Adressen ausgegeben, um die grundlegende Syntax und Operationen in C zu
 * demonstrieren.
 */

#include <stdio.h>

/**
 * @brief Hauptfunktion, die die Deklaration, Initialisierung und
 * Basisausgabe von Variablen demonstriert.
 *
 * Deklariert Variablen verschiedener Datentypen, eine Konstante und einen
 * Zeiger. Zeigt, wie Werte und Zeigeradressen ausgegeben werden. Demonstriert
 * die Verwendung des `const`-Schlüsselworts und Zeigeroperationen.
 *
 * @return int Rückgabestatus des Programms. Gibt 0 zurück, was eine
 * erfolgreiche Ausführung anzeigt.
 */
int main(void) {
  // Deklaration und Initialisierung von Variablen verschiedener Datentypen
  int meinInteger = 10;           ///< Integer-Variable.
  char meinChar = 'A';            ///< Zeichen-Variable.
  short meinShort = 20;           ///< Kurze Integer-Variable.
  long meinLong = 1000;           ///< Lange Integer-Variable.
  long long meinLongLong = 50000; ///< Sehr lange Integer-Variable.
  float meinFloat = 10.5;         ///< Fließkommazahl-Variable.
  double meinDouble =
      20.99; ///< Fließkommazahl-Variable mit doppelter Genauigkeit.
  long double meinLongDouble =
      100.12345; ///< Fließkommazahl-Variable mit erweiterter Genauigkeit.

  // Deklaration einer Konstanten
  const int MEINE_KONSTANTE = 100; ///< Konstante Integer-Variable.

  // Deklaration und Initialisierung eines Zeigers
  int *zeigerAufInteger = &meinInteger; ///< Zeiger auf eine Integer-Variable.

  // Ausgabe der Werte
  printf("Integer: %d\n", meinInteger);
  printf("Char: %c\n", meinChar);
  printf("Short: %d\n", meinShort);
  printf("Long: %ld\n", meinLong);
  printf("Long Long: %lld\n", meinLongLong);
  printf("Float: %f\n", meinFloat);
  printf("Double: %f\n", meinDouble);
  printf("Long Double: %Lf\n", meinLongDouble);
  printf("Konstante: %d\n", MEINE_KONSTANTE);
  printf("Wert des Zeigers: %d\n", *zeigerAufInteger);
  printf("Adresse des Zeigers: %p\n", (void *)zeigerAufInteger);

  return 0;
}
