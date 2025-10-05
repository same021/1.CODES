#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    int i, j, k;

    // Get dimensions for first matrix
    printf("Enter dimensions for first matrix (rows x columns): ");
    scanf("%d %d", &rows1, &cols1);

    // Get dimensions for second matrix
    printf("Enter dimensions for second matrix (rows x columns): ");
    scanf("%d %d", &rows2, &cols2);

    // Check compatibility for multiplication (cols1 must equal rows2)
    if (cols1 != rows2) {
        printf("Error: Matrices cannot be multiplied. Columns of first (%d) must equal rows of second (%d).\n", cols1, rows2);
        return 1;
    }

    // Declare 2D arrays (assuming max size 10x10 for simplicity)
    // In practice, use dynamic allocation for larger/variable sizes
    if (rows1 > 10 || cols1 > 10 || rows2 > 10 || cols2 > 10) {
        printf("Error: Matrix size too large. Max 10x10 supported.\n");
        return 1;
    }

    int arr1[10][10], arr2[10][10], result[10][10];

    // Input first 2D array
    printf("\nEnter elements of first matrix (%dx%d):\n", rows1, cols1);
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input second 2D array
    printf("\nEnter elements of second matrix (%dx%d):\n", rows2, cols2);
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            printf("Element [%d][%j]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Initialize result to 0
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            result[i][j] = 0;
        }
    }

    // Multiply the two arrays and store in result
    // Result dimensions: rows1 x cols2
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            for (k = 0; k < cols1; k++) {  // or rows2, since cols1 == rows2
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Display first matrix
    printf("\nFirst Matrix (%dx%d):\n", rows1, cols1);
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }

    // Display second matrix
    printf("\nSecond Matrix (%dx%d):\n", rows2, cols2);
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

    // Display result matrix
    printf("\nResult Matrix (Product, %dx%d):\n", rows1, cols2);
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
