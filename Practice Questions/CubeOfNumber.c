// A Program to take a number(n) from the user & output its cube (n*n*n).

#include <stdio.h>

int main() {
    int n, cube;
    printf("Enter the number whose cube is to be found: ");
    scanf("%d", &n);

    cube = n * n * n;

    printf("\nThe cube of the given number is: %d", cube);
    
    return 0;
}