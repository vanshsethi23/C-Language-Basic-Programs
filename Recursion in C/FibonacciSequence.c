// Write a function to print the nth term of a Fibonacci Sequence.

// Every Number in a 'Fibonacci Sequence' is the sum of the previous 2 numbers in the sequence.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55..

#include<stdio.h>

int fib(int n);

int main() {
    printf("Fibonnaci of nth term is: %d", fib(6));
return 0;
}

int fib(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }

    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    // printf("Fibonnaci of %d is: %d \n", n, fibN);
    return fibN;
}


