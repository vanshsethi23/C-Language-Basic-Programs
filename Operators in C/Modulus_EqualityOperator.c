// Equality Operator (==) : The ‘==’ operator checks whether the two given operands are equal or not. If so, it returns true (1). Otherwise it returns false (0). 

// A Program to check if a number is divisible by 2 or not.

#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    // In the Output : 1 means TRUE and 0 means FALSE.
    printf("The number is divisible by 2: %d", x % 2 == 0);
    
// A Program to check if a number is Odd or Even.

    int y;
    printf("\n\nEnter a number: ");
    scanf("%d", &y);
    // In the Output : 1 means the number is EVEN and 0 means that the number is ODD.
    printf("The given no. is: %d", y % 2 == 0);
    return 0;
}

