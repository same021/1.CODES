#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Take absolute value to handle negative numbers
    if (n < 0) {
        n = -n;
    }

    // Handle special cases
    if (n <= 1) {
        printf("%d is not a perfect number.\n", n);
        return 0;
    }

    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Check if perfect number
    if (sum == n) {
        printf("%d is a perfect number.\n", n);
    } else {
        printf("%d is not a perfect number.\n", n);
    }

    return 0;
}
