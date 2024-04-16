// To print the sum of first n Natural Numbers, if n is given by the user and also print the numbers in reverse.

#include <stdio.h>

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    int sum = 0;
    for(int j = n; j >= 1; j--) {
        sum = sum + j;
        printf("%d\n", j);
    }
    printf("\nSum is %d", sum);
    
    return 0;
}