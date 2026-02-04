#include <stdio.h>

int main() {
    int n,c;
    int streak = 0;
    int max= 0;
    scanf("%d", &n);
    while (n>0) {
        scanf("%d", &c);
        n--;
        if (c==0) {
            streak++;
            if (streak > max) {
                max = streak;
            }
        } else {
            streak = 0;
        }
    }
    printf("Longest Failure Streak: %d\n", max);

    return 0;
}