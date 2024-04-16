// Program to check if a number entered by the user is prime or not.

#include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            count++; 
        }
    }

    if(count == 2) {
        printf("The entered number is a Prime Number.");
    }
    else {
        printf("The entered number is not a Prime Number.");
    }
    
    return 0;
}