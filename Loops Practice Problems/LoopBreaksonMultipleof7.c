// Program to keep taking numbers as input from the user until the user enters a number which is a multiple of 7.

#include<stdio.h>

int main() {
    int n;
    do {
        printf("Enter Number: ");
        scanf("%d", &n);
        printf("%d\n", n);

        if(n % 7 == 0) {    // Since, on divison by 7 if the remainder is 0 then the no. is a multiple of 7.
            break;
        }
    }
    while(1);

    printf("The number entered is a multiple of 7!");

return 0;
}