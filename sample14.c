#include <stdio.h>

int main() {
    int n, count = 0, r;

    scanf("%d", &n);

    for (; n != 0; n = n / 10) {
        r = n % 10;

        if (r % 2 == 0) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}