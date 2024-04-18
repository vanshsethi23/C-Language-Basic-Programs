//Find the factorial of a number n using recursion.

#include<stdio.h>

int fact(int n);

int main() {
    printf("Factorial is: %d", fact(7));
    return 0;
}

int fact(int n) {
    if(n == 0) {
        return 1;
    }
    int factNm1 = fact(n-1); // calculate the factorial of n-1
    int factN = fact(n-1) * n;
    return factN;
}