#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Take absolute value to handle negative numbers
    if (n < 0) {
        n = -n;
    }

    int sum = 0;
    while (n > 0) {
        sum += n % 10;  // Add last digit to sum
        n /= 10;        // Remove last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
