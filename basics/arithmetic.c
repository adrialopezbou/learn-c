#include <stdio.h>

int main() {
    int lower, upper, step;
    float fahr, celsius;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    while (fahr <= upper) {
        // We have to add .0 to treat them as float, given that results between integers operations always truncate.
        // No need to add .0 to 32 because fahr is already a float, but is a good practice
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("Converting a digit character into an int: %c is int %d\n", '2', '2' - '0');
}