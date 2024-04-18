// Write a program to convert Celcius to Fahrenheit.

#include<stdio.h>

float convertTemp(float celcius);

int main() {
    float celcius;
    printf("Temperature in Celcius: ");
    scanf("%f", &celcius); 

    float far = convertTemp(celcius);
    printf("Temperature in Fahrenheit: %f", far);
    return 0;
}

float convertTemp(float celcius) {
    float far = celcius * (9.0/5.0) + 32;
    return far;
}

