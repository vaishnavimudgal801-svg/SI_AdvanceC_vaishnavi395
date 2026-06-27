#include <stdio.h>

// Custom function to compare two strings
int custom_strcmp(const char *s1, const char *s2) {
    // Loop continues as long as characters match and we haven't hit the end of s1
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    
    // Return the ASCII difference of the first mismatching characters
    return *(const unsigned char *)s1 - *(const unsigned char *)s2;
}

int main() {
    char str1[] = "Apple";
    char str2[] = "Apricot";
    char str3[] = "Apple";

    int result1 = custom_strcmp(str1, str2);
    int result2 = custom_strcmp(str1, str3);

    // Test Case 1: Comparing different strings
    if (result1 == 0) {
        printf("\"%s\" and \"%s\" are equal.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are different (Result: %d).\n", str1, str2, result1);
    }

    // Test Case 2: Comparing identical strings
    if (result2 == 0) {
        printf("\"%s\" and \"%s\" are equal.\n", str1, str3);
    } else {
        printf("\"%s\" and \"%s\" are different.\n", str1, str3);
    }

    return 0;
}
