// Program to check if a given character is digit or not.
    
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.", ch);
    } 
    else {
        printf("%c is not a digit.", ch);
    }

    return 0;
}
