// Program to print the final price of an item including 18 % GST.

#include<stdio.h>

void calculatePrice(float value);

int main() {
    float value; 
    printf("Enter Price: ");
    scanf("%f", &value);

    calculatePrice(value); 

    return 0;
}    

void calculatePrice(float value) {
    value = value + (0.18 * value);
    printf("Final Price is: %f", value);
}


