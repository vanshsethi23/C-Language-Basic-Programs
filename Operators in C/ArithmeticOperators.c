// Sum / Difference / Product / Quotient / Modulus of two numbers :-

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("\nSum is: %d", a + b);
    printf("\nDifference is: %d", a - b);
    printf("\nProduct is: %d", a * b);
    printf("\nQuotient is: %d", a / b);
    printf("\nModulus is: %d", a % b);
    return 0;
}
