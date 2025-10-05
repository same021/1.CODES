#include <stdio.h>

int main() {
    int arr[10];  // Array with fixed capacity of 10
    int size = 5; // Initial number of elements
    int position, i;

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

    // Input from user
    printf("Enter the position to delete (0-based index): ");
    scanf("%d", &position);

    // Check if position is valid
    if (position < 0 || position >= size) {
        printf("Invalid position! Deletion failed.\n");
        return 1;
    }

    // Optional: Store the deleted value if needed
    int deleted = arr[position];
    printf("Deleted value: %d\n", deleted);

    // Shift elements to the left from the position + 1
    for (i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Update size (decrement by 1)
    size--;

    // Display updated array
    printf("Updated array after deletion: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
