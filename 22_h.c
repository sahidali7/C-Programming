// Exam of 'for Loop' for infinite loop

#include<stdio.h>

int main() {
    for(int i = 1; ; i = i + 1) {
        printf("Hello World\n");
    }
    return 0;
}