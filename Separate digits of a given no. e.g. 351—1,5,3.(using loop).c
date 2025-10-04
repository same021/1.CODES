#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle n = 0 separately
    if (n == 0) {
        printf("0\n");
        return 0;
    }

    // Assume n > 0 for the loop
    int first = 1;  // Flag to avoid leading comma
    while (n > 0) {
        int digit = n % 10;
        if (!first) {
            printf(",");
        }
        printf("%d", digit);
        first = 0;
        n /= 10;
    }
    printf("\n");

    return 0;
}
