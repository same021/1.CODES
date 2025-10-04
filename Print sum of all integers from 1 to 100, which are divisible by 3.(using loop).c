#include <stdio.h>

int main() {
    int sum = 0;

    // Loop through numbers from 1 to 100
    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0) {
            sum += i;  // Add to sum if divisible by 3
        }
    }

    printf("Sum of all integers from 1 to 100 divisible by 3: %d\n", sum);

    return 0;
}
