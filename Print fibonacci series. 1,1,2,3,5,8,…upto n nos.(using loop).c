#include <stdio.h>

int main() {
    int n, i;
    long long a = 1, b = 1, next;

    printf("Enter the number of terms (n) for Fibonacci series: ");
    scanf("%d", &n);

    // Handle invalid input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Print the first term if n >= 1
    if (n >= 1) {
        printf("%lld ", a);
    }

    // Print the second term if n >= 2
    if (n >= 2) {
        printf("%lld ", b);
    }

    // Generate and print the rest of the series
    for (i = 3; i <= n; i++) {
        next = a + b;
        printf("%lld ", next);
        a = b;
        b = next;
    }

    printf("\n");

    return 0;
}
