#include <stdio.h>
int main() {
    int k,s,m;
    scanf("%d %d %d",&k,&s,&m);
    if(k>s && k>m){
        printf("%d is largest",k);
    }else if(s>k && s>m){
        printf("%d is largest",s);
    }else{
        printf("%d is largest",m);
    }
    return 0;
}