#include <stdio.h>

int main() {
    int arr[10];  // Array with fixed capacity of 10
    int size = 4; // Initial number of elements
    int newNum, i;

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
    printf("Enter the number to insert at the end: ");
    scanf("%d", &newNum);

    // Check if array has space (simple capacity check)
    if (size >= 10) {
        printf("Array is full! Cannot insert.\n");
        return 1;
    }

    // Insert the new number at the end
    arr[size] = newNum;

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
