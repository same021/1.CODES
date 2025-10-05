#include <stdio.h>

int main() {
    int arr[10];  // Array with fixed capacity of 10
    int size = 5; // Initial number of elements
    int valueToDelete, i, position = -1;

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
    printf("Enter the value to delete: ");
    scanf("%d", &valueToDelete);

    // Search for the value
    for (i = 0; i < size; i++) {
        if (arr[i] == valueToDelete) {
            position = i;
            break;  // Delete the first occurrence
        }
    }

    // Check if value was found
    if (position == -1) {
        printf("Value %d not found in the array! No deletion performed.\n", valueToDelete);
        return 0;
    }

    // Optional: Confirm the deleted value
    printf("Deleted value %d found at position %d.\n", valueToDelete, position);

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
