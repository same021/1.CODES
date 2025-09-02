#include <stdio.h>
int main() {
    int a, b, product;
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    // Multiply the numbers
    product = a * b;
    // Display the result
    printf("Product: %d\n", product);
    return 0;
}
