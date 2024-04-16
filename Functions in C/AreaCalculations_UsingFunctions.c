// Write functions to calculate the area of a square, a circle & a rectangle.

#include<stdio.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);

float squareArea(float side) {
    return side * side;
}

float circleArea(float radius) {
    return 3.14 * radius * radius;
}

float rectangleArea(float a, float b) {
    return a * b;
}

int main() {
    float side, radius, a, b;
    
    printf("Enter side: ");
    scanf("%f", &side);
    printf("Enter radius: "); 
    scanf("%f", &radius);
    printf("Enter length of rectangle: ");
    scanf("%f", &a);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &b);

    printf("\n\n");
    printf("Area of rectangle is: %f", rectangleArea(a, b));
    printf("\nArea of square is: %f", squareArea(side));
    printf("\nArea of circle is: %f", circleArea(radius));

return 0;
}
