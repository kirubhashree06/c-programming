#include <stdio.h>
int main() {
    int n,max,weight,total=0,pepole=0;
    scanf("%d",&max);
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&weight);
        n--;
        if (total+weight>max) {
            break;
        }total+=weight;
        pepole++;
    }
    printf("%d\n",pepole);
        if (total>max) {
            printf("yes\n");
        }else {
            printf("no\n");
        }
    return 0;
}