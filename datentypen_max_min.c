// datentypen_max_min.c
// max. und min. Werte der verschiedenen Datentypen
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    // Ganzzahlige Datentypen
    printf("Bereich von int: %d bis %d\n", INT_MIN, INT_MAX);
    printf("Bereich von unsigned int: 0 bis %u\n", UINT_MAX);
    printf("Bereich von char: %d bis %d\n", CHAR_MIN, CHAR_MAX);
    printf("Bereich von unsigned char: 0 bis %d\n", UCHAR_MAX);
    printf("Bereich von short: %d bis %d\n", SHRT_MIN, SHRT_MAX);
    printf("Bereich von unsigned short: 0 bis %d\n", USHRT_MAX);
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
/*
Bereich von int: -2147483648 bis 2147483647
Bereich von unsigned int: 0 bis 4294967295
Bereich von char: -128 bis 127
Bereich von unsigned char: 0 bis 255
Bereich von short: -32768 bis 32767
Bereich von unsigned short: 0 bis 65535
Bereich von long: -9223372036854775808 bis 9223372036854775807
Bereich von unsigned long: 0 bis 18446744073709551615
Bereich von long long: -9223372036854775808 bis 9223372036854775807
Bereich von unsigned long long: 0 bis 18446744073709551615
Bereich von float: 1.175494e-38 bis 3.402823e+38
Bereich von double: 2.225074e-308 bis 1.797693e+308
Bereich von long double: 3.362103e-4932 bis 1.189731e+4932
*/
