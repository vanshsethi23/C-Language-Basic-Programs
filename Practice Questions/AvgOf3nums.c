// Program to print the average of three numbers.

#include <stdio.h>

int main() {
    int num1, num2, num3;
    float average;
    
    // Get the three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Calculate average
    average = (num1 + num2 + num3) / 3.0;
    
    // Display the average
    printf("The average of %d, %d, and %d is %f", num1, num2, num3, average);
    
    return 0;
}
