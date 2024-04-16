// Write a program to find if a character entered by user is upper case or not.

#include<stdio.h>

int main() {
    char ch;
    printf("Enter Character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("The character entered is in UPPER CASE!");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("The character entered is in LOWER CASE!");
    }
    else {
        printf("The character entered is not an English Alphabet!");
    }
    return 0;
}
    
