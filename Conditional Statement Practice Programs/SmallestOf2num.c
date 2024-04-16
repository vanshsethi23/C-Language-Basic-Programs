// Program to print the smallest of the 2 numbers.

#include <stdio.h>

int main() {
    int num1, num2, min;

    // Read the two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Finding the minimum of the two numbers
    if (num1 < num2) {
        min = num1;
    } 
    else {
        min = num2;
    }

    // Printing the minimum number
    printf("The smallest number is %d", min);

    return 0;
}
