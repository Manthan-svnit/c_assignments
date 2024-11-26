/*WRITE A C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE.*/
#include <stdio.h>

void countFileStats(char *filename) {
    FILE *fp;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Could not open file %s\n", filename);
        return;
    }

    while ((ch = fgetc(fp)) != EOF) {
        charCount++;

        if (ch == ' ' || ch == '\t') {
            wordCount++;
        }

        if (ch == '\n') {
            lineCount++;
        }
    }

    if (charCount > 0) {
        wordCount++;
    }

    printf("File %s statistics:\n", filename);
    printf("Characters: %d\n", charCount);
    printf("Words: %d\n", wordCount);
    printf("Lines: %d\n", lineCount + 1); // +1 for the last line

    fclose(fp);
}

int main() {
    char filename[100];

 printf("Enter the filename: ");
    scanf("%s", filename);

    countFileStats(filename);

    return 0;
}
