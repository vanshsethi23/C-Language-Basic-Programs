// Break Statement - used to break out of the loop.

// Program to keep taking numbers from the user until the user enters an odd number.

#include<stdio.h>

int main () {
    int n;
    do {
        printf("Enter Number: ");
        scanf("%d", &n);
        printf("%d\n", n);
        
        if(n % 2 != 0) {    // Since, If a number is not divisibe by 2 it is an odd number.
            break;
        }
    } while(1);

    printf("The number entered is an odd number!");

return 0;
}