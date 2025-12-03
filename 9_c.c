// Print 1(true) or 0(false) for following statements:
// c) if a number is greater than 9 & less than 100 - true 

#include<stdio.h>
#include<math.h>

int main () {
    int x;
    printf("enter number: ");
    scanf("%d", &x);

    printf("%d", x>9 && x<100);
    return 0;
}