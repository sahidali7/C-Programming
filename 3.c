// Write a program to calculate perimeter of rectangle
// Take sides, a & b, from the user. 

#include<stdio.h>

int main(){
    float a, b;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);

    printf("Parameter of Rectangle is : %.2f\n", 2 * (a + b));

    return 0;
}