#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Function to check if a number is automorphic
int isAutomorphic(int n) {
    int square = n * n;
    int temp = n;

    // Check if last digits of square equal the number itself
    while (temp > 0) {
        if ((temp % 10) != (square % 10)) {
            return 0;
        }
        temp /= 10;
        square /= 10;
    }
    return 1;
}

int main() {
    int primeCount = 0;

    printf("Automorphic numbers between 1 and 500:\n");
    for (int i = 1; i <= 500; i++) {
        // Count primes
        if (isPrime(i)) {
            primeCount++;
        }

        // Check and print automorphic numbers
        if (isAutomorphic(i)) {
            printf("%d ", i);
        }
    }

    printf("\nNumber of prime numbers between 1 and 500: %d\n", primeCount);

    return 0;
}
