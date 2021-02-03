#include <stdio.h>

int main(void) {

    // Declare variables
    int edge, volume;

    // Get edge length from user
    printf("Enter the edge length: ");
    scanf_s("%d", &edge);

    // Calculate volume
    volume = edge * edge * edge;

    // Print the result
    printf("The volume of the cube is %d", volume);

    return 0;
}