#include <stdio.h>
int main() {
    int n,over,total=0,risk=0;
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&over);
        n--;
        total+=over;
        if (over>4) {
            risk++;
        }
    }printf("%d\n",total);
    printf("days:%d",risk);
    return 0;
}