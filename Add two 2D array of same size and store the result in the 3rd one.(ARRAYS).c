#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;

    // Get dimensions from user (assuming same for both arrays)
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare 2D arrays (assuming max size 10x10 for simplicity)
    // In practice, use dynamic allocation for larger/variable sizes
    if (rows > 10 || cols > 10) {
        printf("Error: Matrix size too large. Max 10x10 supported.\n");
        return 1;
    }

    int arr1[10][10], arr2[10][10], result[10][10];

    // Input first 2D array
    printf("\nEnter elements of first matrix (%dx%d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input second 2D array
    printf("\nEnter elements of second matrix (%dx%d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Add the two arrays and store in result
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Display first matrix
    printf("\nFirst Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    // Display second matrix
    printf("\nSecond Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    // Display result matrix
    printf("\nResult Matrix (Sum):\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
