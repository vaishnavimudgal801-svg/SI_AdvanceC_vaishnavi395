#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string is a palindrome
bool isPalindrome(const char *str) {
    int length = strlen(str);
    
    // Compare characters from both ends moving inward
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return false; // Mismatch found, not a palindrome
        }
    }
    return true; // All characters matched
}

int main() {
    char word1[] = "radar";
    char word2[] = "hello";

    if (isPalindrome(word1)) {
        printf("'%s' is a palindrome.\n", word1);
    } else {
        printf("'%s' is NOT a palindrome.\n", word1);
    }

    if (isPalindrome(word2)) {
        printf("'%s' is a palindrome.\n", word2);
    } else {
        printf("'%s' is NOT a palindrome.\n", word2);
    }

    return 0;
}