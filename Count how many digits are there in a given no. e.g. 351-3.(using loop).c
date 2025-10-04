#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle n = 0 separately (1 digit)
    if (n == 0) {
        printf("1\n");
        return 0;
    }

    // Take absolute value for negative numbers (optional, but handles negatives)
    if (n < 0) {
        n = -n;
    }

    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }

    printf("%d\n", count);

    return 0;
}
