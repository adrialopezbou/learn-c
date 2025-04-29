#include <stdio.h>

/*
Advantages of Using Pointers
- Less time in program execution.
- Working on the original variable.
- With the help of pointers, we can create data structures (linked-list, stack, queue).
- Returning more than one value from functions.
- Searching and sorting large data very easily.
- Dynamically memory allocation
*/

void printAge(int *pAge)
{
printf("You are %d years old\n", *pAge);
}

int main()
{
    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc

    int age = 21;
    int *pAge = &age;

    //printf("address of age: %p\n", &age);
    //printf("value of pAge: %p\n", pAge);

    //printf("size of age: %d bytes\n", sizeof(age));
    //printf("size of pAge: %d bytes\n", sizeof(pAge));

    //printf("value of age: %d\n", age);
    //printf("value at stored address: %d\n", *pAge); //deferencing

    printAge(pAge);

    return 0;
}