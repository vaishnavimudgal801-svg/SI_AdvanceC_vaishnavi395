#include <stdio.h>

int main() {
    int number;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check the remainder using the modulus operator
    if (number % 2 == 0) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
