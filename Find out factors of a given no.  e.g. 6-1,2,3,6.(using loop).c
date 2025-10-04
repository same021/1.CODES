#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Take absolute value to handle negative numbers (factors of |n|)
    if (n < 0) {
        n = -n;
    }

    // Handle n = 0 or n = 1
    if (n <= 0) {
        printf("No factors (invalid input)\n");
        return 0;
    }
    if (n == 1) {
        printf("1\n");
        return 0;
    }

    int first = 1;  // Flag to avoid leading comma
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (!first) {
                printf(",");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}
