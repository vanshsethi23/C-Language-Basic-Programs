// Program to demonstrate call by reference in C by calculating sum, product & average of 2 numbers using a function & printing the results in the main function.

#include <stdio.h>

void calculation(int a, int b, int *sum, int *product, float *average);

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("\n");

    int sum, product;
    float average;
    calculation(num1, num2, &sum, &product, &average);

    printf("Sum = %d\nProduct = %d\nAverage = %.2f\n",sum, product, average);
    return 0;
}

void calculation(int a, int b, int *sum, int *product, float *average) {
    *sum = a + b;
    *product = a * b;
    *average = (*sum) / 2.0;
}

