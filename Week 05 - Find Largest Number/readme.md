# Selection Statements & Loops

### IF Statement

```
if (condition) { 
    statements; 
}
```

### IF...ELSE Statements

```
if (condition) { 
    statements; 
}
else {
    statements;
}
```

### WHILE Loop

```
while (condition) {
    statements;
}
```

### DO...WHILE Loop

```
do {
    statements;
}
while (condition);
```

<br>

## Example: Find the Largest Number

```c
#import <stdio.h>

int main(void) {

    int largest = 0;
    int num = 0;

    printf("\nFollow the prompts to enter numbers one by one. "
           "\nWhen you are finished, enter 0 to stop and print "
           "the largest number.\n\n");

    do {

        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > largest) {
            largest = num;
        }

    } 
    while (num > 0);

    printf("\nThe largest number entered is: %d\n", largest);
}
```