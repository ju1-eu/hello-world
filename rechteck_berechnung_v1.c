/*
    rechteck_berechnung_v1.c
    Eingabe Zahl 1 = 2
    Eingabe Zahl 2 = 3
    Umfang: 10.000000
    Flächeninhalt: 6.000000
*/
#include <stdio.h>

int main(void)
{
    float seite_a = 0.0F;
    float seite_b = 0.0F;
    float umfang = 0.0F;
    float flaecheninhalt = 0.0F;

    printf("Berechnet den Umfang und Fläche eines Rechtecks\n");
    printf("Eingabe Zahl 1 = ");
    scanf("%f", &seite_a);
    printf("Eingabe Zahl 2 = ");
    scanf("%f", &seite_b);

    umfang = 2 * seite_a + 2 * seite_b;
    flaecheninhalt = seite_a * seite_b;

    printf("Umfang: %f\n", umfang);
    printf("Flächeninhalt: %f\n\n", flaecheninhalt);

    return 0;
}
