#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols], B[rows][cols], sum[rows][cols];

    // Input matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter A[%d][%d] and B[%d][%d]: ", i, j, i, j);
            scanf("%d %d", &A[i][j], &B[i][j]);
            sum[i][j] = A[i][j] + B[i][j]; // Add directly
        }
    }

    // Display result
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}