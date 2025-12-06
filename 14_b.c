/* Q14. Write a program through ternary statements to check if a student passed or failed .
    marks > 30 is PASS
    marks <= 30 Fail
*/

#include<stdio.h>

int main() {
    int marks;

    printf("Enter marks(0-100): ");
    scanf("%d", &marks);

    marks <=30? printf("FAIL\n") : printf("PASS\n");
    return 0;
}