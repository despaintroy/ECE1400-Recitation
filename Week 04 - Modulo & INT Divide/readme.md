# Reading Multiple Input Values

Use integer division and the modulo operator to select specific digits from a number.

<br>

## Example: Reversing 2-Digit Number

Read a whole 2-digit integer from the user with `%d` and print it with its digits reversed. Ex. 12 -> 21

 
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
    printf("Reversed: %d%d \n", second, first);
    
    return 0;
}
```

<br>

<br>

## Example: Tens Place Selector

Have the user enter any integer, then print only the digit in the 10s place. Ex. 1234 -> 3
 
```c
#include <stdio.h>

int main(void) {
    
    int number, tens;
    
    // Get a 2 digit integer form user
    printf("Enter an integer of any length: ");
    scanf("%d", &number);
    
    // Int divide the number by 10 to get rid of the digit in the 1s place
    // Then mod by 10 to get rid of everything before the 1s place (formerly the 10s place)
    tens = number / 10 % 10;
    
    // Print the 10s place
    printf("The digit in the 10s place is %d \n", tens);
    
    return 0;
}
```

### Note: 

To select the digit in the 10s place, you can use either `number / 10 % 10` or `number % 100 / 10`.

<br>
