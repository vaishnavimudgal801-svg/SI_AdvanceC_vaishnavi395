#include <stdio.h>

int main() {
    int rows, i, j;
    int number = 1; // Start sequence from 1

    // Prompt user for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\nFloyd's Triangle:\n");
    
    // Outer loop handles the number of rows
    for (i = 1; i <= rows; i++) {
        
        // Inner loop handles the elements in each row
        for (j = 1; j <= i; j++) {
            printf("%d ", number);
            number++; // Increment the natural number sequence
        }
        
        // Move to the next line after finishing a row
        printf("\n");
    }

    return 0;
}
