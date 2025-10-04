#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Take absolute value to handle negative numbers
    if (n < 0) {
        n = -n;
    }

    int reversed = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    printf("%d\n", reversed);

    return 0;
}
