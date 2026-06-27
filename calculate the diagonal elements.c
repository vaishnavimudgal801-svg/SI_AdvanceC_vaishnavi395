#include <stdio.h>

int main() {
    int n;
    int principal_sum = 0;
    int secondary_sum = 0;

    // Prompt user for square matrix size
    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Efficient O(N) loop to calculate diagonal sums
    for (int i = 0; i < n; i++) {
        // Condition for main diagonal: row index == column index
        principal_sum += matrix[i][i];

        // Condition for secondary diagonal: column index == N - 1 - row index
        secondary_sum += matrix[i][n - 1 - i];
    }

    // Output the results
    printf("\nMatrix Elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of Principal Diagonal: %d\n", principal_sum);
    printf("Sum of Secondary Diagonal: %d\n", secondary_sum);

    return 0;
}
