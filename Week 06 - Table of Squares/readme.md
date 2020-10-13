# Table of Squares

Write a program that will ask the user how many squares to print, then print that many. The program stops after every 24 squares and waits for the user to press 'enter' to continue. 

## Example: Printing a Table of Squares

For this program, we're using the variable type 'unsigned long' instead of int
 because it can hold much larger numbers. In format strings, unsigned longs
 are represented as '%lu'

```c
#include <stdio.h>

int main(void) {
    
    // Declare variable n
    unsigned long n;
    
    // Ask the user for how many squares to print (n)
    printf("\nEnter the number of squares to print: ");
    scanf("%lu", &n);
    printf("\n");
    getchar();
    
    // Loop 'n' times
    for (unsigned long i=1; i<=n; i++) {
        
        printf("%lu\t%lu\n", i, i*i);
        
        // Pause when the loop is a multiple of 24
        if (i%24==0) {
            printf("\nPress enter to continue: \n");
            getchar();
        }
    }
    
    return 0;
}

```