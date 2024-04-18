#include <stdio.h>

// Function to find the sum of digits of a number using recursion
int sumOfDigits(int num) {
    // Base case: If the number is a single digit, return it
    if (num < 10) {
        return num;
    }
    // Recursive case: Sum the last digit with the sum of the remaining digits
    else {
        return num % 10 + sumOfDigits(num / 10);
    }
}

int main() {
    int number;
    
    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Call the sumOfDigits function and print the result
    printf("Sum of digits of %d is %d\n", number, sumOfDigits(number));
    
    return 0;
}
