#include <stdio.h>

int main() {
    int arr[10];  // Array with fixed capacity of 10
    int size = 5; // Initial number of elements
    int searchValue, i, position = -1;

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
        printf("Array is empty! Cannot search.\n");
        return 1;
    }

    // Input from user
    printf("Enter the value to search: ");
    scanf("%d", &searchValue);

    // Linear search for the value
    for (i = 0; i < size; i++) {
        if (arr[i] == searchValue) {
            position = i;
            break;  // Found the first occurrence
        }
    }

    // Output the result
    if (position != -1) {
        printf("Value %d found at position %d.\n", searchValue, position);
    } else {
        printf("Value %d not found in the array.\n", searchValue);
    }

    return 0;
}
