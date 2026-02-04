
#include <stdio.h>
int main() {
    int n,study,inactive=0,active=0;
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&study);
        n--;
        if (study==0) {
            inactive++;
        }
    }printf("%d\n",inactive);

    if (inactive>=3) {
        printf("high\n");
    }
    else {
        printf("low\n");
    }
    return 0;
}