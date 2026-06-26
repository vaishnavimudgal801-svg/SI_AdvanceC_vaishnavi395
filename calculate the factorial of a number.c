#include <stdio.h>

int main() {
    int num, i = 1;
    long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Multiply numbers up to the input number
    while (i <= num) {
        factorial = factorial * i;
        i++;
    }

    printf("Factorial: %ld\n", factorial);
    return 0;
}
