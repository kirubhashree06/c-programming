#include <stdio.h>
int main() {
    int n,wallet,purchase,success=0;
    scanf("%d",&wallet);
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&purchase);
        n--;
        if (purchase>wallet) {
            break;
        }wallet-=purchase;
        success++;
    }
    printf("%d\n",success);
    printf("%d",wallet);
    return 0;
}