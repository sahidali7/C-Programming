// Q17. Write a program to find a character entered by an user is upper case or not.

#include<stdio.h>

int main() {
    char ch;

    printf("Enter character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("Upper case\n");
    }
    else if(ch >= 'a' && ch <= 'z') {
        printf("Lower case\n");
    }
    else {
        printf("Not english letter");
    }
    return 0;
}