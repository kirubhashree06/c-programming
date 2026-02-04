#include <stdio.h>
int main() {
    int n,pack,usage,rem,fail=0,day=0,over=0;
    scanf("%d",&pack);
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&usage);
        n--;
        day++;
        rem=pack;
        rem -= usage;
        if (rem <= 0 && fail == 0) {
            fail = day;
            over = -rem;
            break;
        }
    }
    if (fail == 0) {
        printf("fail: Not Exhausted\n");
    } else {
        printf("%d\n",fail);
    }
    printf(" %d\n", over);
    return 0;
}