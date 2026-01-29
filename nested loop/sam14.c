#include <stdio.h>
int main() {
        int i, j, r = 5;
        char ch;
        for(i = 1; i <= r; i++) {
            ch = 'A';
            for(j = 1; j <= i; j++) {
                printf("%c ", ch++);
            }
            printf("\n");
        }
        return 0;
    }