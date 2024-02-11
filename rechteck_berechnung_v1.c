/**
 * @file rechteck_berechnung_v1.c
 * @brief Berechnet Umfang und Fläche eines Rechtecks basierend auf
 * Benutzereingaben.
 *
 * Dieses Programm fordert den Benutzer auf, die Längen der Seiten eines
 * Rechtecks einzugeben. Anschließend berechnet es den Umfang und den
 * Flächeninhalt des Rechtecks und gibt diese Werte aus.
 */

#include <stdio.h>

/**
 * @brief Hauptfunktion, die den Umfang und Flächeninhalt eines Rechtecks
 * berechnet.
 *
 * Fordert den Benutzer zur Eingabe der Längen von zwei Seiten eines Rechtecks
 * auf. Berechnet dann den Umfang und Flächeninhalt des Rechtecks mit den
 * Formeln: Umfang = 2 * (seite_a + seite_b) Flächeninhalt = seite_a * seite_b
 * und gibt die berechneten Werte aus.
 *
 * @return int Rückgabewert des Programms. 0 für erfolgreiches Beenden.
 */
int main(void) {
  float seite_a = 0.0F;        ///< Länge der Seite a des Rechtecks.
  float seite_b = 0.0F;        ///< Länge der Seite b des Rechtecks.
  float umfang = 0.0F;         ///< Berechneter Umfang des Rechtecks.
  float flaecheninhalt = 0.0F; ///< Berechneter Flächeninhalt des Rechtecks.

  // Benutzeraufforderung und Eingabe
  printf("Berechnet den Umfang und Fläche eines Rechtecks\n");
  printf("Eingabe Zahl 1 = ");
  scanf("%f", &seite_a);
  printf("Eingabe Zahl 2 = ");
  scanf("%f", &seite_b);

  // Berechnung des Umfangs und Flächeninhalts
  umfang = 2 * seite_a + 2 * seite_b;
  flaecheninhalt = seite_a * seite_b;

  // Ausgabe der Ergebnisse
  printf("Umfang: %f\n", umfang);
  printf("Flächeninhalt: %f\n\n", flaecheninhalt);

  return 0;
}
