#include <stdio.h>
int main() {
    int n,totaldata,usage,success=0;
    scanf("%d",&totaldata);
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&usage);
        n--;
    if (usage>totaldata) {
        break;
    }
        totaldata-=usage;
        success++;

    }printf("%d\n",success);
    printf("%d",totaldata);
    return 0;
}
