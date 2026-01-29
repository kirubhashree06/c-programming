#include<math.h>
#include<stdio.h>

    int main () {
        int m,n,p=1;
        scanf("%d %d",&m,&n);
        for ( int i=1;i<=n;i++) {
            p*=m;
        }
        printf("%d",p);
        return 0;
    }