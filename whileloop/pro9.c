#include <stdio.h>
int main() {
    int n,fuel,trip,count=0;
    scanf("%d",&fuel);
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&trip);
        n--;
        if (trip>fuel) {
            break;
        }
        fuel-=trip;
        count++;
    }
    printf("%d\n",count);
    printf("%d",fuel);
    return 0;
}