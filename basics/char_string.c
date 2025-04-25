// The C char type is just a number (a single byte) - character representations depend on the character set (Usually ASCII in C)

// String type doesn't exist, so it's basically an array of chars.
// In C you have to terminate a String with the char '\0', which marks the string end by convetion.
// Otherwise, scanning through a string without termination will start scanning through random memory.

#include <stdio.h>
#include <string.h>

// K&R 1-17 | Reverse a string
int main() {
    char x[5] = "Bab";
    int j = strlen(x) - 1;
    for (int i = 0; i < j; i++) {
        char aux = x[i];
        x[i] = x[j];
        x[j] = aux;
        j--;
    }
    printf("%s\n", x);
    return 0;
}
