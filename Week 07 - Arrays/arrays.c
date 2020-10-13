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
