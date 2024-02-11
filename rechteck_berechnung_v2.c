/**
 * @file rechteck_berechnung_v2.c
 * @brief Berechnet Umfang und Fläche eines Rechtecks mit validierter
 * Benutzereingabe.
 *
 * Dieses Programm fordert den Benutzer auf, die Längen der Seiten eines
 * Rechtecks einzugeben, validiert die Eingaben als positive Dezimalzahlen und
 * berechnet dann den Umfang und die Fläche des Rechtecks. Ungültige Eingaben
 * führen zu einer erneuten Eingabeaufforderung.
 */

#include <stdio.h>

/**
 * @brief Bereinigt den Eingabepuffer.
 *
 * Diese Funktion entfernt alle übrig gebliebenen Zeichen aus dem Eingabepuffer
 * bis zum nächsten Zeilenumbruch oder EOF. Sie wird verwendet, um den Puffer
 * nach einer ungültigen Eingabe zu bereinigen, damit nachfolgende Leseversuche
 * nicht fehlschlagen.
 */
void bereinigeEingabePuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {
    // Nichts tun, nur aus dem Puffer entfernen
  }
}

/**
 * @brief Hauptfunktion, die die Benutzereingaben entgegennimmt, validiert und
 * die Berechnungen durchführt.
 *
 * Fordert den Benutzer zur Eingabe der Längen von zwei Seiten eines Rechtecks
 * auf und validiert diese Eingaben. Berechnet dann den Umfang und die Fläche
 * des Rechtecks mit den Formeln: Umfang = 2 * (seite_a + seite_b) Flächeninhalt
 * = seite_a * seite_b und gibt die berechneten Werte aus.
 *
 * @return int Rückgabewert des Programms. 0 für erfolgreiches Beenden.
 */
int main(void) {
  float seite_a = 0.0F;        ///< Länge der Seite A des Rechtecks.
  float seite_b = 0.0F;        ///< Länge der Seite B des Rechtecks.
  float umfang = 0.0F;         ///< Berechneter Umfang des Rechtecks.
  float flaecheninhalt = 0.0F; ///< Berechneter Flächeninhalt des Rechtecks.

  printf("Berechnet den Umfang und die Fläche eines Rechtecks\n");

  // Eingabe und Validierung für Seite A
  printf("Geben Sie die Länge der Seite A ein (positive Dezimalzahl): ");
  while (scanf("%f", &seite_a) != 1 || seite_a <= 0) {
    printf(
        "Ungültige Eingabe! Bitte geben Sie eine positive Dezimalzahl ein: ");
    bereinigeEingabePuffer(); // Bereinigt den Eingabepuffer
  }

  // Eingabe und Validierung für Seite B
  printf("Geben Sie die Länge der Seite B ein (positive Dezimalzahl): ");
  while (scanf("%f", &seite_b) != 1 || seite_b <= 0) {
    printf(
        "Ungültige Eingabe! Bitte geben Sie eine positive Dezimalzahl ein: ");
    bereinigeEingabePuffer(); // Bereinigt den Eingabepuffer
  }

  // Berechnung des Umfangs und der Fläche
  umfang = 2 * (seite_a + seite_b);
  flaecheninhalt = seite_a * seite_b;

  // Ausgabe der Ergebnisse
  printf("Umfang: %.1f\n", umfang);
  printf("Flächeninhalt: %.1f\n\n", flaecheninhalt);

  return 0;
}
