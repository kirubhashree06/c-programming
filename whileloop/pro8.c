#include <stdio.h>
int main() {
int n,c,streak=0,max=0;
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&c);
        n--;
        if (c==0){
            streak++;
        if (streak>max) {
            max=streak;
        }
    } else {
            streak =0;
        }
   }
    printf("long : %d",max);
    return 0;
}