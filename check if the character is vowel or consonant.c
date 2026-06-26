#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &c)
    if (!isalpha(ch)) {
        printf("%c is not a valid alphabet.\n", ch);
    }
    else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
             ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } 
    else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}

