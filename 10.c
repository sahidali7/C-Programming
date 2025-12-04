// Q10. Write a program to print the average of 3 numbers.

#include<stdio.h>

int main() {
    float a, b, c, average;

    printf("Enter 3 numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    average = (a + b + c) / 3;

    printf("Average of 3 numbers is: %.2f\n", average);

    return 0;

}
