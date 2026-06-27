#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float average;

    // Ask user for the total number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Guard clause for invalid array sizes
    if (n <= 0) {
        printf("Please enter a valid number of elements greater than 0.\n");
        return 1;
    }

    int arr[n]; // Declare a Variable Length Array (VLA)

    // Input elements from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of all elements
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate the average (with explicit type casting to preserve decimals)
    average = (float)sum / n;

    // Display the final results
    printf("\n--- Results ---\n");
    printf("Sum of array elements      = %d\n", sum);
    printf("Average of array elements  = %.2f\n", average);

    return 0;
}