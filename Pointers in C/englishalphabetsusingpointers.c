// Write a program in C to print all the letters in english alphabet using a pointer.

#include <stdio.h>

int main() {
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char *ptr = alphabet;

    printf("Letters in the English alphabet:\n");

    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }
    
    printf("\n");

    return 0;
}
