#include <stdio.h>

int main() {
    int i;

    // (A) Pattern: Straightforward decreasing second number
    printf("(A)\n");
    for (i = 1; i <= 5; i++) {
        printf("%d %d\n", i, 6 - i);
    }

    printf("\n"); // Separate patterns

    // (B) Pattern: Each pair printed twice (parallel/repeated lines)
    printf("(B)\n");
    // First pair: 1 5 (printed twice)
    printf("1 5\n");
    printf("1 5\n");
    // Second pair: 2 4 (printed twice)
    printf("2 4\n");
    printf("2 4\n");
    // Third pair: 3 3 (printed twice)
    printf("3 3\n");
    printf("3 3\n");

    // Alternative loop-based version for (B) using a loop to repeat each line
    /*
    for (i = 1; i <= 3; i++) {
        int first = i;
        int second = 6 - i;
        printf("%d %d\n", first, second);
        printf("%d %d\n", first, second);  // Repeat each line
    }
    */

    return 0;
}
