// Write a function that prints 'Namaste' if user is Indian & 'Bonjour' if the user is French.

#include<stdio.h>

void namaste();
void bonjour();

void namaste() {
    printf("Namaste!\n");
}

void bonjour() {
    printf("Bonjour!\n");
}

int main() {
    printf("Enter F for French & I for Indian: ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'I') {
        namaste();
    }
    else if(ch == 'F') {
        bonjour();
    }
    else {
        printf("Sorry, greetings only specified for Indians and French. Have a Good Day!\n");
    }
    return 0;
}
