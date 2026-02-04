
#include <stdio.h>
int main() {
    int n,delay,total=0,days=0;
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&delay);
        n--;
        total+=delay;
        if (delay>2) {
            days++;
        }
    }printf("total :%d\n",total);
    printf("%d",days);
    return 0;
}