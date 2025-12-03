// Example of if-else

#include<stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if(age >= 18)
        printf("Adult\n"); // if single statement then curly braces is not mandatory
    else {
        printf("Not adult\n");
    }

    return 0;
}