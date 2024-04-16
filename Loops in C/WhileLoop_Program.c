// Print the numbers from 0 to n using while loop, if n is given by the user.

#include <stdio.h>

int main() {
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    int i = 0;
    while(i <= n) {
        printf("%d \n", i);
        i++;
    }
    return 0;
}