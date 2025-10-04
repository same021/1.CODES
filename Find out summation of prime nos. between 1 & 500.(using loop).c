#include <stdio.h>
#include <math.h>

#define LIMIT 500

int main() {
    int isPrime[LIMIT + 1];
    long long sum = 0;  // Use long long to handle large sums

    // Initialize all numbers as prime
    for (int i = 0; i <= LIMIT; i++) {
        isPrime[i] = 1;
    }

    isPrime[0] = 0;
    isPrime[1] = 0;

    // Sieve of Eratosthenes to mark non-primes
    for (int i = 2; i * i <= LIMIT; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= LIMIT; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    // Sum all prime numbers between 1 and 500
    for (int i = 2; i <= LIMIT; i++) {
        if (isPrime[i]) {
            sum += i;
        }
    }

    printf("Summation of prime numbers between 1 and 500 is: %lld\n", sum);

    return 0;
}
