// Continue Statement - used to skip the current iteration of the loop.

#include<stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        if(i == 6) {
            continue;
        }
        printf("%d \n", i);
    }
return 0;
}

