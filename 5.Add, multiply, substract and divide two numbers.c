#include <stdio.h>
int main() {
    float a, b;
    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    // Perform operations
    float sum = a + b;
    float difference = a - b;
    float product = a * b;
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);
    // Check for division by zero before dividing
    if (b != 0) {
        float quotient = a / b;
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    return 0;
}
