#include <stdio.h>
int main() {
    int n, i = 0;
    int balance, transaction;
    int low= 0;

    scanf("%d", &n);
    scanf("%d", &balance);

    while (i < n) {
        scanf("%d", &transaction);
        balance = balance + transaction;

        if (balance < 2000) {
            low = low+ 1;
        }

        i = i + 1;
    }

    printf("Final Balance: %d\n", balance);
    printf("Low Balance Days: %d\n", low);

    return 0;
}