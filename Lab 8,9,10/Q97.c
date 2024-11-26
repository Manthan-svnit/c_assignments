/*WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER.*/
#include <stdio.h>
#include <ctype.h>

int countVowels(char *str) {
    int count = 0;

    while (*str) {
        char ch = tolower(*str);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    int vowels = countVowels(str);

    printf("The number of vowels in the string is: %d\n", vowels);

    return 0;
}
