#include <stdio.h>

int main() {
    int totalData;
    int n;
    int i = 0;
    int usage;
    int days_used = 0;
    scanf("%d", &totalData);
    scanf("%d", &n);
    while (i < n && totalData > 0) {
        scanf("%d", &usage);
        totalData = totalData - usage;
        if (totalData >= 0) {
            days_used = days_used + 1;
        }
        i = i + 1;
    }
    int remaining = totalData;
    if (remaining < 0) {
        remaining = 0;
    }
    printf("Days Used: %d\n", days_used);
    printf("Remaining Data: %dGB\n", remaining);
    return 0;
}