#include <stdio.h>

int main() {
    int i, j, space;
    int n = 4;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (space = 1; space <= (n - i) * 2 + 1; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }
    for (j = 1; j <= n * 2 + 1; j++) {
        printf("*");
    }
    printf("\n");
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        for (space = 1; space <= (n - i) * 2 + 1; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}