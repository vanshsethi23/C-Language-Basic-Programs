// Write a Program to give grades to a student 

/* Rubrics

marks < 30 --> C
30 <= marks < 70 --> B
70 <= marks < 90 --> A
90 <= marks <= 100 --> A+
*/

#include<stdio.h>

int main() {
    int marks;
    printf("Enter Marks(0-100): ");
    scanf("%d", &marks);

    if(marks < 30) {
        printf("C grade");
    }
    else if(marks >= 30 && marks < 70) {
        printf("B grade");
    }
    else if(marks >= 70 && marks < 90) {
        printf("A grade");
    }
    else {
        printf("A+ grade");
    }
    return 0;
}