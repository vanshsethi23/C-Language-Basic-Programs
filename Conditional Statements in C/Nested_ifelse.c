// Nested if - else Statements :

#include<stdio.h>

int main() {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if(number >= 0) {
        printf("Positive number\n");
        if(number % 2 == 0) {
            printf("Even number\n");
        } else {
            printf("Odd number\n");
        }
    }
    else {
        printf("Negative number");
    }
    return 0;
}
