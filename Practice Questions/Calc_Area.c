// A Program to calculate the Area of a Square :-

#include <stdio.h>

int main() {
    int side;
    printf("Enter side of the square: ");
    scanf("%d", &side);

    printf("Area of the square is: %d", side * side);

// A Program to calculate the Area of a Rectangle :-
    
    int length, breadth;
    printf("\n\nEnter length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter breadth of the rectangle: ");
    scanf("%d", &breadth);

    printf("Area of the rectangle is %d", length * breadth);

// A Program to calculate the Area of a Triangle :-

    int base, height;
    printf("\n\nEnter base of the triangle: ");
    scanf("%d", &base);
    printf("Enter height of the triangle: ");
    scanf("%d", &height);   

    printf("Area of the triangle is %f", 0.5 * base * height);

// A Program to calculate the Area of a Circle :-

    float radius;
    printf("\n\nEnter radius of the circle: ");
    scanf("%f", &radius);

    printf("Area of the circle is %f", 3.14 * radius * radius);
    return 0;
}