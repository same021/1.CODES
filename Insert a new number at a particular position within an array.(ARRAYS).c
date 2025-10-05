#include <stdio.h>

int main() {
    int arr[10];  // Array with fixed capacity of 10
    int size = 4; // Initial number of elements
    int position, newNum, i;

    // Initialize the array with sample elements
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;

    // Display original array
    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Input from user
    printf("Enter the position to insert (0-based index): ");
    scanf("%d", &position);
    printf("Enter the number to insert: ");
    scanf("%d", &newNum);

    // Check if position is valid
    if (position < 0 || position > size) {
        printf("Invalid position! Insertion failed.\n");
        return 1;
    }

    // Shift elements to the right from the insertion position
    for (i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new number at the position
    arr[position] = newNum;

    // Update size
    size++;

    // Display updated array
    printf("Updated array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
