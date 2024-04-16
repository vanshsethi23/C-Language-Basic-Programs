// Do - While Loop

#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    // Print the numbers from 0 to n using do while loop, if n is given by the user.

    int i = 0;
    do {
        printf("%d \n", i);
        i++;
    } while(i <= n);
    return 0;
}