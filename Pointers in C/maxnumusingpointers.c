// Write a program in C to find the maximum number between two numbers using a pointer.

#include <stdio.h>

int find_max(int *ptr1, int *ptr2);

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    int max = find_max(&num1, &num2);
    
    printf("The maximum number between %d and %d is: %d\n", num1, num2, max);
    
    return 0;
}

int find_max(int *ptr1, int *ptr2) {
    if (*ptr1 > *ptr2) {
        return *ptr1;
    } else {
        return *ptr2;
    }
}
