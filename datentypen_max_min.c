/**
 * @file datentypen_max_min.c
 * @brief Zeigt die maximalen und minimalen Werte der verschiedenen Datentypen.
 *
 * Dieses Programm demonstriert die Verwendung von Grenzwerten aus limits.h und
 * float.h für verschiedene Datentypen in C, einschließlich ganzzahliger und
 * Fließkommadatentypen.
 */

#include <float.h>
#include <limits.h>
#include <stdio.h>

/**
 * @brief Hauptfunktion, zeigt die Maximal- und Minimalwerte verschiedener
 * Datentypen.
 *
 * Nutzt Konstanten aus limits.h und float.h, um die Wertebereiche für
 * verschiedene ganzzahlige und Fließkommadatentypen auszugeben. Dient der
 * Illustration von Wertebereichen in der C Programmierung.
 *
 * @return int Rückgabewert des Programms. 0 für erfolgreiches Beenden.
 */
int main(void) {
    // Ganzzahlige Datentypen
    printf("Bereich von int: %ld bis %ld\n", (long)INT_MIN, (long)INT_MAX);
    printf("Bereich von unsigned int: 0 bis %lu\n", (unsigned long)UINT_MAX);
    printf("Bereich von char: %d bis %d\n", CHAR_MIN, CHAR_MAX);
    printf("Bereich von unsigned char: 0 bis %u\n", (unsigned)UCHAR_MAX);
    printf("Bereich von short: %d bis %d\n", SHRT_MIN, SHRT_MAX);
    printf("Bereich von unsigned short: 0 bis %u\n", (unsigned)USHRT_MAX);
    printf("Bereich von long: %ld bis %ld\n", LONG_MIN, LONG_MAX);
    printf("Bereich von unsigned long: 0 bis %lu\n", ULONG_MAX);
    printf("Bereich von long long: %lld bis %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Bereich von unsigned long long: 0 bis %llu\n", ULLONG_MAX);

    // Fließkommadatentypen
    printf("Bereich von float: %e bis %e\n", FLT_MIN, FLT_MAX);
    printf("Bereich von double: %e bis %e\n", DBL_MIN, DBL_MAX);
    printf("Bereich von long double: %Le bis %Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
