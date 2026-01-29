#include <stdio.h>
int main() {
    int n,rem,rev=0;
    scanf("%d",&n);
    for (int i=n;n!=0;n=n/10) {
        rev=(rev*10)+n%10;
    }
    printf("%d",rev);

return 0;
}