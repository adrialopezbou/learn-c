#include <stdio.h>

int main() {
    printf("Hello, ");
    printf("%s\n", "world!");
    printf("Printing integer %d", 5);
    printf(" and float %.1f rounded up to the first decimal.\n", 2.35);

    printf("Reserving 4 characters for this string:%4s\n", "A");

    // Escape sequence like \n provides a general and extensible mechanism for representing hard-to-get or invisible characters.
    // \t for tab, \b for backspace, \" for double quote, and \\ for backlash itself

    return 0;
}