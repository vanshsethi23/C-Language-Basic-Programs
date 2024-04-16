// If - Else Statements :

#include <stdio.h>

int main() {
    int age, marks;
    printf("Enter Age: ");
    scanf("%d", &age);
    printf("\n");

    if(age >= 18) {
        printf("Adult\n");
        printf("They can vote.\n");
        printf("They can drive.\n");
    }
    else {
        printf("Not Adult\n");
        printf("They can't vote.\n");
        printf("They can't drive.\n");
    }
} 
