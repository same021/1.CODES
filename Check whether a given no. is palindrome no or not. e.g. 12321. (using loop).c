#include <stdio.h>

int main() {
    int n, original, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Take absolute value to handle negative numbers (treat as non-palindrome if negative, but reverse absolute)
    if (n < 0) {
        n = -n;
    }
    original = n;

    // Reverse the number
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    // Check if palindrome
    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
