// Write a function to find square root of a number.

#include <stdio.h>
#include <math.h>

float SquareRoot_num(float n);

int main() {
    float number;
    printf("Enter number: ");
    scanf("%f", &number);

    float result = SquareRoot_num(number);
    printf("Square root of %f is %.3f\n", number, result);

    printf("Square root of %f is %.3f\n", number, sqrt(number)); // Using predefined 'sqrt' function from math.h library.

    return 0;
}

float SquareRoot_num(float n) {
    float i;
    for (i = 0.1; i * i < n; i = i + 0.01) {
        // Iteratively check if the square of i is less than the input number
        // Continue until i^2 >= n
    }
    return i; // Return the value of i, which should be an approximation of the square root
}
