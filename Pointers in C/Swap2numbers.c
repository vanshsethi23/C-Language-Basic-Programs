// Program to swap 2 numbers, a & b.

#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int a, b;
    printf("Enter the first number, a: ");
    scanf("%d", &a);
    printf("Enter the second number, b: ");
    scanf("%d", &b);

    swap(&a, &b);
    printf("\nAfter swapping: a = %d, b = %d\n", a, b);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// We used "call by reference" in this program to swap the values of 'a' and 'b'.

// call by reference: when we pass address of a variable as an argument to a function & it is stored in the pointer, the function can modify the value of the original variable directly.