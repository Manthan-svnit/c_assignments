//WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING.
#include <stdio.h>
#include <ctype.h>

int countWords(char *str) {
    int count = 0;

    while (*str) {
        while (*str && isspace(*str)) {
            str++;
        }
        if (*str && !isspace(*str)) {
            count++;
            while (*str && !isspace(*str)) {
                str++;
            }
        }
    }
    return count;
}

int main() {
    char str[100];
    printf("Enter String: \n");
    gets(str);
    int wordCount = countWords(str);

    printf("The number of words in the string is: %d\n", wordCount);

    return 0;
}
