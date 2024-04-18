#include <stdio.h>

// Pointers: A variable that stores the memory address of another variable.
// Syntax

int main() {
    int age = 23;
    int *ptr = &age; // a pointer variable that points to an integer data type.
    int _age = *ptr; // to access the value stored in the pointer variable.

    // Printing the value of the Variable
    printf("%d\n", _age);

    // Printing the value of the Memory Address 
    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);

    // Note: &age & ptr both prints the same address while &ptr prints the address of the pointer variable.

    // Printing the value of the Variable whose Memory Address is stored in the Pointer.
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    return 0;
}

