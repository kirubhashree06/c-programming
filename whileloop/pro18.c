
#include <stdio.h>
int main() {
    int n,hour,values,safe=0,count=0;
    scanf("%d",&hour);
    scanf("%d",&n);
    while (n>0) {
        scanf("%d",&values);
        n--;
        if (hour>=values) {
            safe++;
        }
        else {
            count++;
        }
    }
        printf("%d",safe);
        printf("%d",count);
    return 0;
}