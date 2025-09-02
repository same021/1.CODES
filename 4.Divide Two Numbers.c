#include <stdio.h>
int main() {
    float a, b, result;
    // Input two numbers
    printf("Enter numerator: ");
    scanf("%f", &a);
    printf("Enter denominator: ");
    scanf("%f", &b);
    // Check for division by zero
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        // Perform division
        result = a / b;
        printf("Result: %.2f\n", result);
    }
    return 0;
}
