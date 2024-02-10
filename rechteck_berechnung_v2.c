// rechteck_berechnung_v2.c
#include <stdio.h>

void bereinigeEingabePuffer()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
        // Nichts tun, nur aus dem Puffer entfernen
    }
}

int main(void)
{
    float seite_a = 0.0F;
    float seite_b = 0.0F;
    float umfang = 0.0F;
    float flaecheninhalt = 0.0F;

    printf("Berechnet den Umfang und die Fläche eines Rechtecks\n");

    printf("Geben Sie die Länge der Seite A ein (positive Dezimalzahl): ");
    while (scanf("%f", &seite_a) != 1 || seite_a <= 0)
    {
        printf("Ungültige Eingabe! Bitte geben Sie eine positive Dezimalzahl ein: ");
        bereinigeEingabePuffer(); // Bereinigt den Eingabepuffer
    }

    printf("Geben Sie die Länge der Seite B ein (positive Dezimalzahl): ");
    while (scanf("%f", &seite_b) != 1 || seite_b <= 0)
    {
        printf("Ungültige Eingabe! Bitte geben Sie eine positive Dezimalzahl ein: ");
        bereinigeEingabePuffer(); // Bereinigt den Eingabepuffer
    }

    umfang = 2 * (seite_a + seite_b);
    flaecheninhalt = seite_a * seite_b;

    printf("Umfang: %.1f\n", umfang);
    printf("Flächeninhalt: %.1f\n\n", flaecheninhalt);

    return 0;
}
