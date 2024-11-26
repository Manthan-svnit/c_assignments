#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rocks: ");
    scanf("%d", &n);

    int rock[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element of rock %d: ", i + 1);
        scanf("%d", &rock[i]);
    }

    int gem = 0;
    for (int i = 0; i < n; i++) {
        int unique = 1;
        for (int j = 0; j < i; j++) {
            if (rock[i] == rock[j]) {
                unique = 0;
                break;
            }
        }
        if (unique) {
            gem++;
        }
    }

    printf("Number of unique elements: %d\n", gem);
    return 0;
}
