#include <stdio.h>

int main() {
    int arr1[5], arr2[10];
    int i;

    // Input 5 elements into first array
    printf("Enter 5 elements for the first array:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Initialize second array to 0 (or any default value) for clarity
    for (i = 0; i < 10; i++) {
        arr2[i] = 0;  // Using 0 to show skipped positions clearly
    }

    // Copy elements from arr1 to arr2, skipping one position each time
    // Place arr1[i] at arr2[2*i] (even indices: 0,2,4,6,8)
    // This skips odd indices (1,3,5,7,9)
    for (i = 0; i < 5; i++) {
        arr2[2 * i] = arr1[i];
    }

    // Display first array
    printf("\nFirst Array (5 elements):\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Display second array (10 elements, with skips shown as 0)
    printf("\nSecond Array (10 elements, after copying with skips):\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    // Optional: Highlight the copied positions
    printf("\nCopied positions in second array: indices 0,2,4,6,8 (skipping odd indices).\n");

    return 0;
}
