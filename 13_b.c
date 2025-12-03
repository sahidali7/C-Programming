// Example of if-else

#include<stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("Adult\n");
        printf("They can vote\n");
        printf("They can drive\n");
    }
    else {
        printf("Not adult\n");
    }

    printf("Thank You!\n"); // no matter age is greater or smaller than 18, it will always get print

    return 0;
}