// Program to calculate the Perimeter of a Rectangle (Take sides a & b from the users) :-
 
#include <stdio.h>

int main() {
    float a, b, perimeter;
    printf("Enter the Length of the rectangle: ");
    scanf("%f", &a);
    printf("Enter the Breadth of the rectangle: ");
    scanf("%f", &b);

    perimeter = 2 * (a + b);

    printf("\nThe Perimeter of the rectangle is: %f", perimeter);

    return 0;
}