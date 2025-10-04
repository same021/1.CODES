#include <stdio.h>
#include <math.h>

#define LIMIT 500

int main() {
    int isPrime[LIMIT + 1]; // Boolean array to mark primes

    // Initialize all numbers as prime (1)
    for (int i = 0; i <= LIMIT; i++) {
        isPrime[i] = 1;
    }

    // 0 and 1 are not prime
    isPrime[0] = 0;
    isPrime[1] = 0;

    // Sieve of Eratosthenes: Mark non-primes
    for (int i = 2; i * i <= LIMIT; i++) {
        if (isPrime[i]) {
            // Mark multiples of i as non-prime starting from i*i
            for (int j = i * i; j <= LIMIT; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    // Print all primes between 1 and 500
    printf("Prime numbers between 1 and 500 are:\n");
    for (int i = 2; i <= LIMIT; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
