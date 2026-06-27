#include <stdio.h>

int main() {
    int rows;

    // Get input from user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop handles the rows
    for (int i = 1; i <= rows; i++) {
        
        // Inner loop 1: Prints leading spaces for alignment
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Inner loop 2: Prints the stars
        // The formula (2 * i - 1) ensures an odd number of stars per row
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        // Move to the next line after completing a row
        printf("\n");
    }

    return 0;
}