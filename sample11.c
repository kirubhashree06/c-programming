#include <stdio.h>
int main() {
    int n,rev=10,sum=0;
    scanf("%d",&n);
    for (int i=n;n!=0;n=n/10) {
        rev=n%10;
        sum=sum+rev;
    }
    printf("%d",sum);
    return 0;
}