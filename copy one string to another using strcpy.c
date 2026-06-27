
#include <stdio.h>

int main() {
    char source[] = "Hello, World!";
    char destination[50]; // Ensure this array is large enough
    int i = 0;

    // Copy each character manually
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    // Crucial step: Manually append the null terminator
    destination[i] = '\0';

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}