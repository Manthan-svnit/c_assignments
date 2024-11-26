/*94).WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING
POINTERS.FOR EXAMPLE,
ST =”SVNITJAVA” IS COPIED AS “AVAJTINVS”*/
#include <stdio.h>
#include <string.h>

void reverseString(char *src, char *dest) {
    int len = strlen(src);
    for (int i = 0; i < len; i++) {
        *(dest + i) = *(src + len - 1 - i);
    }
    *(dest + len) = '\0';
}

int main() {
    char str[100] ;
    char reversed[100];
    printf("Enter String: \n");
    gets(str);
    reverseString(str, reversed);

    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", reversed);

    return 0;
}
