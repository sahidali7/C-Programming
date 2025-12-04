// Q12. Write a program to print the smallest number.

#include<stdio.h>

int main() {
    int a, b, small;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    small = b + (a - b) * (a < b);

    printf("Smallest number is: %d", small);
    return 0;

}
