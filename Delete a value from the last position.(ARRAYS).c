#include <stdio.h>

int main() {
    int arr[10];  // Array with fixed capacity of 10
    int size = 5; // Initial number of elements
    int i;

    // Initialize the array with sample elements
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // Display original array
    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Check if array is empty
    if (size <= 0) {
        printf("Array is empty! Cannot delete.\n");
        return 1;
    }

    // Optional: Store the deleted value if needed
    int deleted = arr[size - 1];
    printf("Deleted value (last element): %d\n", deleted);

    // Delete the last element by decrementing size (no shifting needed)
    size--;

    // Display updated array
    printf("Updated array after deleting last element: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
