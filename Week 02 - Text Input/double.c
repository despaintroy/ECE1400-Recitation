#include <stdio.h>

int main(void) {

    // Declare variables
    int number;
    int doubled;

    // Get an integer from the user and store it in 'number'
    printf("Enter an integer: ");
    scanf_s("%d", &number);

    // Multiply 'number' by 2 and store it in 'doubled'
    doubled = 2 * number;

    // Print the result
    printf("Your number doubled is %d", doubled);

    return 0;
}