
#include <stdio.h>
#include <stdbool.h>

bool are_arrays_equal(int arr1[], int arr2[], int size1, int size2) {
    // 1. If sizes are different, they cannot be equal
    if (size1 != size2) {
        return false;
    }

    // 2. Check each element at corresponding indices
    for (int i = 0; i < size1; i++) {
        if (arr1[i] != arr2[i]) {
            return false; // Found a mismatch
        }
    }

    return true; // All elements match
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 3, 4, 5};
    
    int size_a = sizeof(a) / sizeof(a[0]);
    int size_b = sizeof(b) / sizeof(b[0]);

    if (are_arrays_equal(a, b, size_a, size_b)) {
        printf("Arrays are equal.\n");
    } else {
        printf("Arrays are not equal.\n");
    }

    return 0;
}
