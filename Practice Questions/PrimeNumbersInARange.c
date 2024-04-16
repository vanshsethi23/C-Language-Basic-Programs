// Write a Program to print Prime Numbers in a range.

#include<stdio.h>

int main() {
    int i,j,n1,n2;
    printf("Enter Range: ");
    scanf("%d %d", &n1, &n2);

    for(i = n1; i <= n2; i++) {
        for(j = 2; j <= i; j++) {
            if(i % j == 0)     // If i is divisible by j, we break out of the inner loop because i is not a prime number.
            break;
        }
        if(i == j) 
        printf("%d\n", j);
    }
    printf("Above are the Prime Numbers in the given range.");
    
return 0;
}