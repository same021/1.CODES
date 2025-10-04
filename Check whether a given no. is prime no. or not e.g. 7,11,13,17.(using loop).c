#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int isPrime = 1; // Assume it is prime initially

    printf("Enter a positive integer to check if it is prime: ");
    scanf("%d", &n);

    // Handle cases where n is less than or equal to 1
    if (n <= 1) {
        isPrime = 0;
    } else {
        // Check for divisibility from 2 to sqrt(n)
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
