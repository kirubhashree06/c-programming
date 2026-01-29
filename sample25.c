#include <stdio.h>

int main() {
    int N, original, digit, sum = 0, count = 0;

    scanf("%d", &N);
    original = N;

    for (int temp = N; temp > 0; temp /= 10) {
        count++;
    }

    for (int temp = N; temp > 0; temp /= 10) {
        digit = temp % 10;
        int power = 1;
        for (int i = 1; i <= count; i++) {
            power *= digit;
        }
        sum += power;
    }

    if (sum == original)
        printf("Yes");
    else
        printf("No");

    return 0;
}