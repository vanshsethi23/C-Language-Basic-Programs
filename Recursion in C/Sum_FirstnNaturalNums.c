// Find the sum of first n Natural Numbers using recursion.

#include<stdio.h>

int sum(int n);

int main() {
    printf("Sum is: %d", sum(10));
    return 0;
}

// Recursive Function :
int sum(int n) {
    if(n == 1) {
        return 1;
    }
    int sumNm1 = sum(n-1); // calculate the sum of 1 to (n-1).
    int sumN = sumNm1 + n;
    return sumN;
} 