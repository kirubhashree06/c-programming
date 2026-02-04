#include <stdio.h>
int main() {
    int max,n,weights;
    int allow=0,total=0;
    scanf("%d", &max);
    scanf("%d", &n);
    while (n>0) {
        scanf("%d",&weights);
        n--;
        if (total + weights > max) {
            break;
        }
        total+=weights;
            allow++;
    }printf("passengers :%d\n",allow);
    if (total<max)
     printf("over\n: no");
    else {
        printf("over:yes");
    }
    return 0;
}