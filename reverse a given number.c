#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop to reverse the number
    while (num != 0) {
        remainder = num % 10;          
        reverse = reverse * 10 + remainder; 
        num /= 10;                    
    }

    printf("Reversed Number: %d\n", reverse);

    return 0;
}
