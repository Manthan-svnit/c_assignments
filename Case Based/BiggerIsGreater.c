#include <stdio.h>
#include <string.h>

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char* str, int start, int end) {
    while (start < end) {
        swap(&str[start], &str[end]);
        start++;
        end--;
    }
}

void nextPermutation(char* str) {
    int n = strlen(str);
    int i = n - 2;

    while (i >= 0 && str[i] >= str[i + 1]) {
        i--;
    }

    if (i == -1) {
        printf("no answer\n");
        return;
    }

    int j = n - 1;
    while (str[j] <= str[i]) {
        j--;
    }

    swap(&str[i], &str[j]);

    reverse(str, i + 1, n - 1);

    
    printf("%s\n", str);
}

int main() {
    int t;
    char str[101];
   
    printf("Enter number of test cases: ");
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
       
        printf("Enter string: ");
        scanf("%s", str);

       
        nextPermutation(str);
    }

    return 0;
}
