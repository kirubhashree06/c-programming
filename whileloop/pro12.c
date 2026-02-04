#include <stdio.h>
int main() {
    int n,usage,max=0,super=0;
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&usage);
        n--;
        if (usage>max) {
            max=usage;
        }if (usage>5) {
            super++;
        }
    }printf("%d\n",max);
    printf("hours :%d",super);
    return 0;
}