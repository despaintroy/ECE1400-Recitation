#include <stdio.h>

int main(void) {

    // Declare variables
    int a, b, c;

    // Get three values from the user
    printf("Enter three integers: ");
    scanf_s("%d %d %d", &a, &b, &c);

    // Print the same values back to the user
    printf("The three values are %d, %d, and %d.", a, b, c);

    return 0;
}