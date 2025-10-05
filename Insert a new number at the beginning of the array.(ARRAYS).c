#include <stdio.h>

int main() {
    int arr[10];  // Fixed-size array of maximum 10 elements
    int n, new_num, i;

    // Get the current number of elements (must be less than 10 to allow insertion)
    printf("Enter the current number of elements in the array (0 <= n < 10): ");
    scanf("%d", &n);

    if (n < 0 || n >= 10) {
        printf("Error: Number of elements must be between 0 and 9 to allow insertion.\n");
        return 1;
    }

    // Input current elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the new number to insert at the beginning
    printf("Enter the new number to insert at the beginning: ");
    scanf("%d", &new_num);

    // Display original array
    printf("\nOriginal Array (%d elements):\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insert at beginning: Shift existing elements right by 1
    if (n > 0) {
        for (i = n - 1; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
    }
    arr[0] = new_num;  // Place new element at index 0
    n++;  // Increment size

    // Display new array
    printf("\nArray after insertion at beginning (%d elements):\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}n
