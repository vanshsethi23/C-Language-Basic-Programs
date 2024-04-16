/*
For Loop :-

Syntax:
for(initialization; condition; increment/decrement) {
    // Statements to be executed
}
*/

// Print the numbers from 0 to 10 using for loop.
// Demonstration: i = i + 1 --> i += 1 --> i++ (only for i = 1). 

#include<stdio.h>

int main() {
    for(int i = 0; i <= 10; i = i + 1) {
        printf("%d \n", i);
    }

// Note: The loop iterator/ counter can be of a FLOAT or even CHARACTER Datatype.
    printf("\n");

    for(float j = 1.0; j <= 10.0; j = j + 1) {
        printf("%f \n", j);
    }
    printf("\n");

    for(char k = 'a'; k <= 'z'; k = k + 1) {
        printf("%c \n", k);
    }
    
return 0;
}

