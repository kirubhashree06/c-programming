#include <stdio.h>
int main() {
    int n,c,success=0,cancel=0;
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&c);
        n--;
        if (c==1) {
            success++;
        }
        else if (c==0) {
            cancel++;
        }
    }
        printf("%d\n",success);
        printf("%d\n",cancel);
    if (success>=cancel) {
        printf("status : safe\n");
    }
    else {
        printf("status : risk\n");
    }
return 0;
}