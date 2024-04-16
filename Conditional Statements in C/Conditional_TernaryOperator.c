// Conditional (Ternary) Operator: used only when there is a single statement in the if_else statements to be executed.
/*
Syntax:-
(condition)? execution (if true) : execution (if false)
*/

// Write a program to check if a student passed or failed.
// marks > 30 ---> PASS
// marks <= 30 ---> FAIL


#include<stdio.h>

int main() {
    int marks;
    printf("Enter marks(0-100): ");
    scanf("%d", &marks);

    // Solving using Ternary Operator
    
    marks < 30? printf("Thee student is FAIL!"): printf("Thee student is PASS!");
    return 0;
    }
