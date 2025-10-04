#include <stdio.h>
#include <math.h>

#define LIMIT 500

int main() {
    int count = 0;

    // Loop through each number from 2 to 500
    for (int n = 2; n <= LIMIT; n++) {
        int isPrime = 1; // Assume it is prime initially

        // Handle special cases
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
            count++;
        }
    }

    printf("Number of prime numbers between 1 and 500: %d\n", count);

    return 0;
}
