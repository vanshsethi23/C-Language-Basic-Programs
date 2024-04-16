// Use library fubctions to calculate the square of a number given by the user.

#include<stdio.h>

#include<math.h>

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    printf("The square of the number is: %f", pow(n, 2));
    
return 0;
}