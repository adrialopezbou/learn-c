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
    // But the data in that address is not actually cleared
    // C doesn't free up space automatically when using malloc, calloc or realloc, so we must free space using free()
    // A memory leak can occur when we fail to free dynamically allocated memory
    free(a);

    // Difference between calloc and malloc is that calloc it first empties the memory space (adding all 0s) while malloc keeps whatever data was there
    // And instead of passing the number of bytes, we have to pass the number of items and the bytes of each of those items
    int *b = calloc(10, sizeof(int));

    // Modifying the memory allocation size to whatever size b had plus 5.
    // Data is not modified, but if the new size conflicts with other allocated memory, it will copy everything to a free block of memory
    b = realloc(b, sizeof(int) * (size + 5));

    return 0;
}