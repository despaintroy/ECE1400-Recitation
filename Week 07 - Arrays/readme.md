# Arrays and FOR Loops

Write a program that will ask the user for 5 numbers, then print the sum and product of those numbers. 

## Example: Sum and Product

```c
#include <stdio.h>

int main(void) {
    
    int nums[5];
    int sum=0, product=1;
    
    printf("\nEnter 5 integers: ");
    
    for (int i=0; i<5; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (int i=0; i<5; i++) {
        sum += nums[i];
        product *= nums[i];
    }
    
    printf("\nSum = %d", sum);
    printf("\nProduct = %d\n\n", product);

    return 0;
}

```