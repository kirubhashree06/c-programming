#include <stdio.h>
int main() {
    int n,r,count=0;
    scanf("%d",&n);
    for (int i=n;n!=0;n=n/10) {
        r=n%10;
        count++;
    }
    printf("%d",count);
        return 0;

}