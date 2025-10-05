#include <stdio.h>

int main() {
    int arr[5];  // Array of maximum 5 elements
    int n, i, temp;

    // Get the number of elements (maximum 5)
    printf("Enter the number of elements (maximum 5): ");
    scanf("%d", &n);

    if (n > 5 || n <= 0) {
        printf("Error: Number of elements must be between 1 and 5.\n");
        return 1;
    }

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display original array
    printf("\nOriginal Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reverse the array in-place using swaps
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Display reversed array
    printf("\nReversed Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
