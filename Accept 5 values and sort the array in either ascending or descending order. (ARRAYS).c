#include <stdio.h>
#include <stdlib.h>  // For qsort() if needed, but we'll implement manually

// Function prototypes
void bubbleSort(int arr[], int n, int ascending);
void selectionSort(int arr[], int n, int ascending);
void insertionSort(int arr[], int n, int ascending);
void quickSort(int arr[], int low, int high, int ascending);
int partition(int arr[], int low, int high, int ascending);

// Main function
int main() {
    int arr[5];
    int i, choice, ascending;

    // Accept 5 values
    printf("Enter 5 integer values:\n");
    for (i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Choose order: 1 for ascending, 2 for descending
    printf("\nChoose sort order:\n1. Ascending\n2. Descending\n");
    scanf("%d", &choice);
    ascending = (choice == 1) ? 1 : 0;

    // Print original array
    printf("\nOriginal array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Choose sorting technique
    printf("\nChoose sorting technique:\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Quick Sort\n");
    scanf("%d", &choice);

    // Apply selected sort
    switch (choice) {
        case 1:
            bubbleSort(arr, 5, ascending);
            printf("Sorted using Bubble Sort");
            break;
        case 2:
            selectionSort(arr, 5, ascending);
            printf("Sorted using Selection Sort");
            break;
        case 3:
            insertionSort(arr, 5, ascending);
            printf("Sorted using Insertion Sort");
            break;
        case 4:
            quickSort(arr, 0, 4, ascending);
            printf("Sorted using Quick Sort");
            break;
        default:
            printf("Invalid choice! Using Bubble Sort as default.\n");
            bubbleSort(arr, 5, ascending);
    }

    // Print sorted array
    printf(" (");
    if (ascending) printf("Ascending");
    else printf("Descending");
    printf("): ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Bubble Sort Implementation
void bubbleSort(int arr[], int n, int ascending) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            int shouldSwap = ascending ? (arr[j] > arr[j + 1]) : (arr[j] < arr[j + 1]);
            if (shouldSwap) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Selection Sort Implementation
void selectionSort(int arr[], int n, int ascending) {
    int i, j, minIdx, temp;
    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            int isSmaller = ascending ? (arr[j] < arr[minIdx]) : (arr[j] > arr[minIdx]);
            if (isSmaller) {
                minIdx = j;
            }
        }
        if (minIdx != i) {
            temp = arr[i];
            arr[i] = arr[minIdx];
            arr[minIdx] = temp;
        }
    }
}

// Insertion Sort Implementation
void insertionSort(int arr[], int n, int ascending) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0) {
            int shouldShift = ascending ? (arr[j] > key) : (arr[j] < key);
            if (shouldShift) {
                arr[j + 1] = arr[j];
                j = j - 1;
            } else {
                break;
            }
        }
        arr[j + 1] = key;
    }
}

// Quick Sort Implementation
int partition(int arr[], int low, int high, int ascending) {
    int pivot = arr[high];
    int i = (low - 1);
    int j;
    for (j = low; j <= high - 1; j++) {
        int isSmaller = ascending ? (arr[j] < pivot) : (arr[j] > pivot);
        if (isSmaller) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

void quickSort(int arr[], int low, int high, int ascending) {
    if (low < high) {
        int pi = partition(arr, low, high, ascending);
        quickSort(arr, low, pi - 1, ascending);
        quickSort(arr, pi + 1, high, ascending);
    }
}
