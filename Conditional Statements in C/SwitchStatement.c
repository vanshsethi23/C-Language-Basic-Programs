// Switch Statement :

#include<stdio.h>

int main() {
    int day; //1- mon; 2- tues; 3- wed; 4- thu; 5- fri; 6- sat; 7- sun. 
    printf("Enter Day (1-7): ");
    scanf("%d", &day);

    switch(day) {
        case 1 : printf("Monday\n");
                 break;
        case 2 : printf("Tueday\n");
                 break;
        case 3 : printf("Wednesday\n");
                 break;
        case 4 : printf("Thursday\n");
                 break;
        case 5 : printf("Friday\n");
                 break;
        case 6 : printf("Saturday\n");
                 break;
        case 7 : printf("Sunday\n");
                 break;
        default : printf("Not a valid Day");
    }
    char month; //a- jan; b- feb; c- mar; d- apr; e- may; f- jun; g- july; h- aug; i- sep; j- oct; k- nov; l- dec.
    printf("\nEnter Month (a-l): ");
    scanf("%s", &month);

    switch(month) {
        case 'a' : printf("January\n");
                 break;
        case 'b' : printf("February\n");
                 break;
        case 'c' : printf("March\n");
                 break;
        case 'd' : printf("April\n");
                 break;
        case 'e' : printf("May\n");
                 break;
        case 'f' : printf("June\n");
                 break;
        case 'g' : printf("July\n");
                 break;
        case 'h' : printf("August\n");
                 break;
        case 'i' : printf("September\n");
                 break;
        case 'j' : printf("October\n");
                 break;
        case 'k' : printf("November\n");
                 break;
        case 'l' : printf("December\n");
                 break;
        default: printf("Not a valid Year");
    }
    return 0;
}