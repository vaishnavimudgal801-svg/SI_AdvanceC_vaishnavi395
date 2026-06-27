#include <stdio.h>

int main() {
    int rows;

    // Ask user for the height of the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop controls the rows, starting from total rows down to 1
    for (int i = rows; i >= 1; --i) {
        
        // Inner loop prints the asterisks for the current row
        for (int j = 1; j <= i; ++j) {
            printf("* ");
        }
        
        // Move to the next line after finishing a row
        printf("\n");
    }

    return 0;
}
