#include <stdio.h>

int main() {
    int i, j;

    // Declare 4x4 matrix and its transpose
    int matrix[4][4], transpose[4][4];

    // Input the 4x4 matrix
    printf("Enter elements of the 4x4 matrix (row-wise):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute transpose: transpose[j][i] = matrix[i][j]
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Display original matrix
    printf("\nOriginal Matrix (4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Display transpose matrix
    printf("\nTranspose Matrix (4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
