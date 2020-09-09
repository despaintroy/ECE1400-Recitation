# Reading Input from the User

This program will only run in Visual Studio. If you are running it from any other program (ex. Cygwin), you will use `scanf()` instead of `scanf_s()` to read user input.

<br>

## Example: Doubling an Integer
 

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
