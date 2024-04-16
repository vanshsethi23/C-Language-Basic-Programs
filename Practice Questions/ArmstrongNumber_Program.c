// Program to check if a given number is Armstrong number or not.

// Armstrong Number : An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

#include <stdio.h>

int main() {
    int n, r, c, arm;
    printf("Enter any Number: ");
    scanf("%d", &n);
    c = n;

    while(n>0) {
        r = n % 10;
        arm = (r*r*r) + arm;
        n = n / 10;
    }
    if(c == arm) {
        printf("The entered number is an Armstrong Number");
    }
    else {
        printf("The entered number is not an Armstrong Number");
    }
    
    return 0;
}
