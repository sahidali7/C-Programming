// Q18. Write a program to check if a given number is Armstrong number or not.
//  (search what is Armstrong number)

#include<stdio.h>

int main() {
    int num, a, b, c, sum;

    printf("Enter three numbers: ");
    scanf("%d", &num);

    a = num/100;
    b = (num/10) % 10;
    c = num % 10;

    sum = (a*a*a) + (b*b*b) + (c*c*c);
    
    if(num == sum) {
        printf("%d is an Armstrong number\n", num);
    }
    else {
        printf("%d is not an Armstrong number\n", num);
    }
    return 0;
}