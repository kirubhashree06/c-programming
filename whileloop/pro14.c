
#include <stdio.h>
int main() {
    int n,total,cash,count=0;
    scanf("%d",&total);
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&cash);
        n--;
        if (cash>total) {
            break;
        }total-=cash;
        count++;
    }printf("%d\n",count);
    printf("%d",total);
    return 0;
}