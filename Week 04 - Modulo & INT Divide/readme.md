# Reading Multiple Input Values

Read a whole 2-digit integer from the user with `%d` and print it with its digits reversed. Ex. 12 -> 21

<br>

## Example: Reversing 2-Digit Number
 
```c
#include <stdio.h>

int main(void) {
    
    int number, first, second;
    
    // Get a 2 digit integer form user
    printf("Enter a two digit integer: ");
    scanf("%d", &number);
    
    // Int divide the number by 10 to get the first digit
    first = number / 10;
    
    // Mod the number number by 10 to get the second digit
    second = number % 10;
    
    // Print second then first
    printf("%d%d \n", second, first);
    
    return 0;
}
```

<br>
