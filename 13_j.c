// Example of Switch operator

#include<stdio.h>

int main() {
    char day; // m-Mon; t-Tues; w-Wed; T-Thurs; F-Friday; s-Saturday; S-Sunday
    printf("Enter day(1-7): ");
    scanf("%c", &day);

    switch(day) {
        case'm': printf("Monday\n");
                break;
        case't': printf("Tuesday\n");
                break;
        case'w': printf("Wednesday\n");
                break;
        case'T' : printf("Thursday\n");
                break;
        case'f': printf("Friday\n");
                break;
        case's': printf("Saturday\n");
                break;
        case'S': printf("Sunday\n");
                break;
        default:printf("Not a valid day!\n");
                break;
    }
    return 0;
}