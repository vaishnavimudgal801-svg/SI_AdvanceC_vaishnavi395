#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    // Return early if the string is empty or null
    if (str == NULL || *str == '\0') {
        return;
    }

    int left = 0;
    int right = strlen(str) - 1; // Index of the last character
    char temp;

    // Swap characters until pointers meet in the middle
    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        // Move pointers toward the center
        left++;
        right--;
    }
}

int main() {
    // Must be an array, not a string literal pointer (e.g., char *str = "Hello")
    // because string literals are stored in read-only memory.
    char myString[] = "Hello World"; 
    
    printf("Original: %s\n", myString);
    
    reverseString(myString);
    
    printf("Reversed: %s\n", myString);
    
    return 0;
}
