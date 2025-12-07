// Q19. Write a program to check if a given number is a natural number.
//  (natural number starts from 1)

#include<stdio.h>

int main() {
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("%d is a natural number\n", number);
    }
    else {
        printf("%d is not a natural number\n", number);
    }
    return 0;
}