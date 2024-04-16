// Program to print the reverse of the table for a number n.

#include<stdio.h>

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    for(int i = 10; i >= 1; i--) {
        printf("%d * %d = %d \n", n, i, n*i);
    }
return 0;
}