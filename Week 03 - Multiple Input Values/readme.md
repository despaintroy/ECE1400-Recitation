# Reading Multiple Input Values

These programs will only run in Visual Studio. If you are running it from any other program (ex. Cygwin), you will use `scanf()` instead of `scanf_s()` to read user input.

<br>

## Example: Volume of a Cube
 
Example of getting a single input value from the user to calculate the volume of a cube.

```c
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
```

<br>

## Example: Scanning and Printing Multiple Values
 
Read multiple input values from the user at at the same time using one scanf_s() statement.

```c
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
```
