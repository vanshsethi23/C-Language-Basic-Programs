// To print - 1 (True) or 0 (False) for the following statements.

// a. if it's sunday & it's snowing --> True
#include <stdio.h>

int main() {
    int isSunday = 1;
    int isSnowing = 1;
    printf("%d \n", isSunday && isSnowing);

// b. if it's monday or it's raining --> True
    int isMonday = 0;
    int isRaining = 1;
    printf("%d \n", isMonday || isRaining);

// c. Check if a given number is a two digit number : ie. if a number is greater than 9 & less than 100 --> True
    int z;
    printf("Enter Number: ");
    scanf("%d", &z);
    printf("%d \n", z>9 && z<100);
    return 0;
}

