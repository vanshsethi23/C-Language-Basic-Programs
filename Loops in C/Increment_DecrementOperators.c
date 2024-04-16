/* Increment Operator 
++i (pre increment) --> increase then use
i++ (post increment) --> use then increase
*/

/*
Decrement Operator 
--i (pre decrement) --> decrease then use
i-- (post decrement) --> use then decrease
*/

#include <stdio.h>

int main() {
    int i = 1;
    int a = 1;
    printf("%d \n", i++);
    printf("%d \n", i);

    printf("\n%d \n", ++a);
    printf("%d \n", a);

    int j = 1;
    int b = 1;
    printf("\n%d \n", j--);
    printf("%d \n", j);

    printf("\n%d \n", --b);
    printf("%d", b);
    
    return 0;
}



