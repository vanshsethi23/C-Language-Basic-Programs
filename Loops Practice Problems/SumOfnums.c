// Program to calculate the sum of all numbers between 5 and 50.

#include<stdio.h>

int main() {
    int sum = 0;
    for(int i = 5; i <= 50; i++) {
        sum = sum + i;
    }

    int final_sum = sum - (5+50);

    printf("The sum of all numbers between 5 and 50 is: %d", final_sum);
return 0;
}