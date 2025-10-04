#include <stdio.h>

int main() {
    int n, original;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Take absolute value to handle negative numbers
    if (n < 0) {
        n = -n;
    }
    original = n;

    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;  // Cube of digit
        n /= 10;
    }

    // Check if Armstrong number
    if (original == sum) {
        printf("%d is an Armstrong number.\n", original);
    } else {
        printf("%d is not an Armstrong number.\n", original);
    }

    return 0;
}
