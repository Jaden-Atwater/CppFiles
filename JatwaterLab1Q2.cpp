//This program will compute and print out sum, difference, product, and division of 2 integers

#include <stdio.h>

int main() {
    int int1 = 5;
    int int2 = 8;

    // Compute the sum
    int sum = int1 + int2;

    // Compute the difference
    int difference = int1 - int2;

    // Compute the product
    int product = int1 * int2;

    // Compute the division
    float division = (float)int1 / int2;

    // Print the results
    printf("The sum of %d and %d is: %d\n", int1, int2, sum);
    printf("The difference of %d and %d is: %d\n", int1, int2, difference);
    printf("The product of %d and %d is: %d\n", int1, int2, product);
    printf("The division of %d and %d is: %.2f\n", int1, int2, division);

    return 0;
}
