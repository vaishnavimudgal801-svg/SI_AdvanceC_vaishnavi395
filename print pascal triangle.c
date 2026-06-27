#include <stdio.h>

int main() {
    int rows, i, space, j;
    long value = 1;

    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    for (i = 0; i < rows; i++) {
        // 1. Print leading spaces for triangular alignment
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        // 2. Calculate and print the values in the current row
        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                value = 1; // The first element of any row is always 1
            } else {
                // Binomial coefficient calculation: C(i, j) = C(i, j-1) * (i - j + 1) / j
                value = value * (i - j + 1) / j;
            }
            printf("%4ld", value);
        }

        // 3. Move to the next line after completing the row
        printf("\n");
    }

    return 0;
}
