// Write comments for programs a & b.

// Taking an example of C program to calculate parameter of rectangle

#include <stdio.h>   // Including standard input-output library

int main() {         // Start of the program
    float a, b;      // Variables to store the sides of the rectangle

    // Taking input for side 'a'
    printf("Enter a: ");
    scanf("%f", &a);

    // Taking input for side 'b'
    printf("Enter b: ");
    scanf("%f", &b);

    // Calculating and printing the perimeter using formula 2 * (a + b)
    printf("Parameter of Rectangle is : %.2f\n", 2 * (a + b));

    return 0;        // End of program

}

/*  for multiple comments line  
    this is how we write
*/