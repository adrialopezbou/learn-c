#include <stdio.h>

// Copy input to output
int main() {
    int c;
    // EOF stands for end of file.
    while ((c = getchar()) != EOF)
        putchar(c)
}