#include <stdio.h>
#include <stdlib.h>

// In memory, variables are stored in the stack in order of creation, and removed automatically when they are not used anymore.
// On the other hand, dynamically allocated memory is stored in the heap.
// In the data memory block, the stack grows from the start downwards, while the heap grows from the end upwards.

int main()
{
    // We are allocating space for 10 integers in the heap (which is where dynamic memory allocation happens)
    // and storing the address in memory in the "a" variable
    // "a" is a dynamically allocated array
    int *a = malloc(sizeof(int)*10);

    // a[i] is the same as *(a + 1), which is essencially finding a value at address a and moving 1 times (which in this case is 4 bytes because it is an int)
    for (int i = 0; i < 10; i++) a[i] = 10 - i;

    for (int i = 0; i < 10; i++)
        printf("a[%d] = %d\n", i, a[i]);
    printf("\n");

    printf("a: %p\n", a);

    // Freeing up the space allocated for "a", so the program no longer controls that memory space
    // C doesn't free up space automatically when using malloc, calloc or realloc, so we must free space using free()
    // A memory leak can occur when we fail to free dynamically allocated memory
    free(a);

    return 0;
}