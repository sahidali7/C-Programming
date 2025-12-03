#include<stdio.h>

void assalamuAlaikum();
void bonjour();

int main(){
    printf("Enter f for French & i for Indian: ");
    char ch;
    scanf("%c", &ch);
    
    if(ch=='i') {
        assalamuAlaikum();
    }
    else {
        bonjour();
    }

    return 0;
}

void assalamuAlaikum(){
    printf("Assalam Alaikum\n");
    bonjour();
}
void bonjour() {
    printf("Bonjour\n");
}