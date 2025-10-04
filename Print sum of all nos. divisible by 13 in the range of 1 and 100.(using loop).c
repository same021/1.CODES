#include <stdio.h>

int main() {
    int sum = 0;

    // Loop through numbers from 1 to 100
    for(int i = 1; i <= 100; i++) {
        if(i % 13 == 0) {
            sum += i;  // Add to sum if divisible by 13
        }
    }

    printf("Sum of all numbers divisible by 13 between 1 and 100 is: %d\n", sum);

    return 0;
}
