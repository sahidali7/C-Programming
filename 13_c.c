// Example of if-else

#include<stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18) 
        printf("Adult\n");

    // without no else statement 
    // if in the output we type less than 18, only Thank You! will get print

    printf("Thank You!");

    return 0;
}