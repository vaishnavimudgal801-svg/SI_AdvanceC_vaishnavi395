#include <stdio.h>

int main() {
    int matrix[10][10], transpose[10][10];
    int rows, cols;

    // 1. Get matrix dimensions from user
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // 2. Accept matrix elements
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Compute the transpose by swapping indices
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // 4. Print the original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // 5. Print the transposed matrix (dimensions are now cols x rows)
    printf("\nTranspose of the Matrix:\n");
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}