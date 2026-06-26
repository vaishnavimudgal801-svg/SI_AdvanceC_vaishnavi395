#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop from 2 up to num - 1
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("%d is not prime.\n", num);
            return 0; // Stops the program immediately
        }
    }

    // Numbers <= 1 are not prime; everything else left is prime
    if (num <= 1) {
        printf("%d is not prime.\n", num);
    } else {
        printf("%d is prime.\n", num);
    }

    return 0;
}