#include <stdio.h>

void compute(int a, int b, int *sum, int *diff, long int *prod, float *quot);


int main(void) {

    // Declare variables
    int a, b;
    int sum, difference;
    long int product;
    float quotient;

    // Get two number from the user
    printf("Enter 2 integers: ");
    scanf("%d %d", &a, &b);

    // Call the compute function
    compute(a, b, &sum, &difference, &product, &quotient);

    // Print the results
    printf("\nSum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %ld\n", product);
    printf("Quotient = %f\n\n", quotient);

    return 0;
}


/*
 Computes the sum, difference, product, and quotient of two integers
 */
void compute(int a, int b, int *sum, int *diff, long int *prod, float *quot) {

    // . . . implement compute function here . . .

}
