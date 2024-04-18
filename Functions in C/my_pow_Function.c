// Make your own pow function.

#include <stdio.h>

long long int my_pow(int base, int exponent);

int main() {
    int base, exponent;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    
    printf("The value of %d to the power %d is %lld\n",base, exponent, my_pow(base, exponent));
    
    return 0;
}
   
long long int my_pow(int base, int exponent) {
    long long int result = 1;
    for (int i = 0; i < exponent; i++) {
        result = result * base;
    }
    return result;
}
