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

    Print the results
    printf("Circumference is %f \n", circumference);
    printf("Area is %f \n", area);

    getchar();
    getchar();
    return 0;
}