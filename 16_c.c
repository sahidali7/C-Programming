/* Q16(a) Will this code:
    int x = 2;
    if(x = 0) {
    printf("x is equal to 1\n");
    printf("%d", x);
    }
    else {
    printf("x is not equal to 1");
    }

    a) give error
    b) print "x is equal to 1"
    c) print "x is not equal to 1"
*/

#include <stdio.h>

int main() {
    int x = 2;
    
    if(x = 0) { // In C, 0 means false, and non-zero value like 1, 2, -1, 2 means true 
        printf("x is equal to 1\n");
        printf("%d\n", x);
    }
    else {
        printf("x is not equal to 1");
    }
    return 0;
}