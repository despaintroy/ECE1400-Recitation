# Reading Input from the User

These programs will only run in Visual Studio. If you are running it from any other program (ex. Cygwin), you will use `scanf()` instead of `scanf_s()` to read user input.

<br>

## Example: Double an Integer
 

```c
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
    
    getchar(); 
    getchar();
    return 0;
}
```

<br>

## Example: Calculate Circumference/Area

```c
#include <stdio.h>

int main(void) {
    
    // Declare variables
    float radius;
    float area;
    float circumference;
    float pi = 3.14159;
    
    // Get the radius from the user
    printf("Enter the radius: ");
    scanf_s("%f", &radius);
    
    // Calculate the circumference and area of the circle
    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    // Print the results
    printf("Circumference is %f \n", circumference);
    printf("Area is %f \n", area);

    getchar(); 
    getchar();
    return 0;
}
```