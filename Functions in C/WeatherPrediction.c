#include <stdio.h>

void weather(int temp);

int main() {
    int temp;
    printf("Enter Temperature: ");
    scanf("%d", &temp);

    weather(temp);

    return 0;
}

void weather(int temp) { 
    if(temp < 10) {
        printf("The weather is Cold!");
    }
    else if(temp >= 10 && temp <= 25) {
        printf("The weather is Pleasant!");
    }
    else if(temp > 25) {
        printf("The weather is Hot!");
    }
}
