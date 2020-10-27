#include <stdio.h>

void value(int x);
void reference(int* x);

int main(void) {
    
    // Initialize a=0, b=0
    int a = 0;
    int b = 0;
    
    // Call two functions to demo pass by value/reference
    value(a);
    reference(&b);
    
    // Print the new values of a and b
    printf("a: %d \nb: %d\n", a, b);

    return 0;
}


/*
 This function doesn't do anything because it is pass by value. When we change
 the value of 'x', it does not affect the value of 'a' in the main function.
 Here, 'x' is a new variable unrelated to 'a'.
 */
void value(int x) {
    x = 1;
}

/*
 This function changes the value of 'b' in the main function because it is pass
 by reference. We pass in a pointer to b's location in memory, then change what
 is stored in that memory location.
 */
void reference(int* x) {
    *x = 1;
}
