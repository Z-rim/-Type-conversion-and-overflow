#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Minimum and Maximum Values of Different Data Types:\n");

    printf("Minimum value of signed char: %d\n", SCHAR_MIN);
    printf("Maximum value of signed char: %d\n", SCHAR_MAX);
    printf("Minimum value of unsigned char: %d\n", 0);
    printf("Maximum value of unsigned char: %d\n", UCHAR_MAX);

    printf("Minimum value of short: %d\n", SHRT_MIN);
    printf("Maximum value of short: %d\n", SHRT_MAX);
    printf("Minimum value of unsigned short: %d\n", 0);
    printf("Maximum value of unsigned short: %u\n", USHRT_MAX);

    printf("Minimum value of int: %d\n", INT_MIN);
    printf("Maximum value of int: %d\n", INT_MAX);
    printf("Minimum value of unsigned int: %d\n", 0);
    printf("Maximum value of unsigned int: %u\n", UINT_MAX);

    printf("Minimum value of long: %ld\n", LONG_MIN);
    printf("Maximum value of long: %ld\n", LONG_MAX);
    printf("Minimum value of unsigned long: %d\n", 0);
    printf("Maximum value of unsigned long: %lu\n", ULONG_MAX);

    printf("Minimum value of float: %E\n", FLT_MIN);
    printf("Maximum value of float: %E\n", FLT_MAX);

    printf("Minimum value of double: %E\n", DBL_MIN);
    printf("Maximum value of double: %E\n", DBL_MAX);

    // Overflow demonstration
    int max_int = INT_MAX;
    printf("Max integer: %d\n", max_int);
    printf("Overflowed value: %d\n", max_int + 1);

    return 0;
}
