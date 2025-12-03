// Write a program to calculate area of circle. (radius is given)

#include<stdio.h>

int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("area of circle is : %f", 3.14*radius*radius);
    return 0;
}