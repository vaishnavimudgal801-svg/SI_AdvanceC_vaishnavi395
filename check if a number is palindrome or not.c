#include <stdio.h>

int main() {
    int original_num, num, remainder;
    int reversed_num = 0;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Save the original number for final comparison
    original_num = num;

    // Core logic to reverse the digits
    while (num != 0) {
        remainder = num % 10;
        reversed_num = (reversed_num * 10) + remainder;
        num /= 10;
    }

    // Compare original and reversed values
    if (original_num == reversed_num) {
        printf("%d is a palindrome.\n", original_num);
    } else {
        printf("%d is not a palindrome.\n", original_num);
    }

    return 0;
}