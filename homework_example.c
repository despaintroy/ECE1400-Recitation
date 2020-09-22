/*******************************************************************************

Function Title: main

Summary:
Calculates the volume of a cube after asking
the user to enter the side length.

Inputs: none
Outputs: none

Compile instructions: gcc homework_example.c –o homework_example.exe

********************************************************************************

PSEUDOCODE

Begin
    Declare variables 'edge' and 'volume'
    Get the edge length from the user
    Calculate volume = edge * edge * edge
    Print the result
End

*******************************************************************************/



#include <stdio.h>

// Begin
int main(void) {

    // Declare variables 'edge' and 'volume'
    int edge, volume;

    // Get edge length from user
    printf("Enter the edge length: ");
    scanf_s("%d", &edge);

    // Calculate volume = edge * edge * edge
    volume = edge * edge * edge;

    // Print the result
    printf("The volume of the cube is %d", volume);

    // End
    return 0;
}