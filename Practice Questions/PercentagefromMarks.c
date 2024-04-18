// Write a function to calculate the Percentage of a student from Marks in Science, Maths & French.

#include<stdio.h> 

int calculatePercentage(int Science, int Maths, int French);

int main() {
    int Science = 95;
    int Maths = 87;
    int French = 98;

    printf("The percentage of the student is: %d", calculatePercentage(Science, Maths, French));
return 0;
}

int calculatePercentage(int Science, int Maths, int French) {
    return((Science + Maths + French) / 3);
}