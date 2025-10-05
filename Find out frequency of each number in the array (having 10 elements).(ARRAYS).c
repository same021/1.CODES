#include <stdio.h>

int main() {
    int arr[10];
    int visited[10] = {0};  // To track which elements have been processed
    int i, j, count;

    // Input 10 elements into the array
    printf("Enter 10 integer elements for the array:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the original array
    printf("\nOriginal Array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Find frequency of each unique number
    // Iterate through the array, and for each unvisited element, count its occurrences
    printf("\nFrequency of each number:\n");
    for (i = 0; i < 10; i++) {
        if (!visited[i]) {  // If this position hasn't been processed yet
            count = 0;
            for (j = 0; j < 10; j++) {
                if (arr[j] == arr[i]) {
                    count++;
                    visited[j] = 1;  // Mark this occurrence as visited
                }
            }
            printf("Number %d appears %d times.\n", arr[i], count);
        }
    }

    return 0;
}
