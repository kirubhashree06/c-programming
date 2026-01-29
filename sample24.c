#include <stdio.h>

int main() {
    int N, og, rev= 0, digit;

    scanf("%d", &N);
    og = N;

    for (; N > 0; N = N / 10) {
        digit = N % 10;
        rev = rev * 10 + digit;
    }

    if (rev == og)
        printf("Yes");
    else
        printf("No");

    return 0;
}