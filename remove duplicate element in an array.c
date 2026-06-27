#include <stdio.h>

int main() {
    int arr[100];
    int size, i, j, k;

    // 1. Get total number of elements from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // 2. Read array elements from the user
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Logic to find and delete duplicate elements
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            // If a matching element is found, it is a duplicate
            if (arr[i] == arr[j]) {
                // Shift all subsequent elements one position to the left
                for (k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                // Reduce the size of the array since an element was removed
                size--;
                // Decrement j so we don't skip checking the newly shifted element
                j--;
            }
        }
    }

    // 4. Print the final unique array
    printf("\nArray after removing duplicate elements:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
