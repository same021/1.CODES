#include <stdio.h>

int main() {
    int arr[10];
    int n, i;
    char direction;

    // Input 10 elements into the array
    printf("Enter 10 integer elements for the array:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input shift positions and direction
    printf("\nEnter the number of positions to shift (n, 0 < n <= 10): ");
    scanf("%d", &n);

    if (n < 0 || n > 10) {
        printf("Error: n must be between 1 and 10.\n");
        return 1;
    }

    if (n == 0) {
        printf("No shift applied (n=0).\n");
    } else {
        printf("Enter direction (L for left shift, R for right shift): ");
        scanf(" %c", &direction);  // Note: space before %c to consume newline

        // Display original array
        printf("\nOriginal Array:\n");
        for (i = 0; i < 10; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Perform shift based on direction
        if (direction == 'L' || direction == 'l') {
            // Left shift by n: Move elements left, discard first n, pad last n with 0
            for (i = 0; i < 10 - n; i++) {
                arr[i] = arr[i + n];
            }
            for (i = 10 - n; i < 10; i++) {
                arr[i] = 0;
            }
            printf("\nAfter Left Shift by %d positions:\n", n);
        } else if (direction == 'R' || direction == 'r') {
            // Right shift by n: Move elements right, discard last n, pad first n with 0
            for (i = 9; i >= n; i--) {
                arr[i] = arr[i - n];
            }
            for (i = 0; i < n; i++) {
                arr[i] = 0;
            }
            printf("\nAfter Right Shift by %d positions:\n", n);
        } else {
            printf("Error: Invalid direction. Use L or R.\n");
            return 1;
        }

        // Display shifted array
        for (i = 0; i < 10; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
