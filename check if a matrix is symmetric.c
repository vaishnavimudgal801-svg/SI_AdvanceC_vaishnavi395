#include <stdio.h>

#define MAX 100

// Function to check if a square matrix is symmetric
int isSymmetric(int matrix[MAX][MAX], int n) {
    // Loop through the upper triangle of the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            // If any mirror elements don't match, it's not symmetric
            if (matrix[i][j] != matrix[j][i]) {
                return 0; // False
            }
        }
    }
    return 1; // True
}

int main() {
    int rows, cols;
    int matrix[MAX][MAX];

    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    // 1. A symmetric matrix must be a square matrix
    if (rows != cols) {
        printf("The matrix is NOT symmetric (It must be a square matrix).\n");
        return 0;
    }

    printf("Enter the elements of the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 2. Check symmetry using the function
    if (isSymmetric(matrix, rows)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is NOT symmetric.\n");
    }

    return 0;
}
