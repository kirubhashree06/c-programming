#include <stdio.h>
int main() {
    int k,s,m;
    scanf("%d %d %d",&k,&s,&m);
    if(k+s+m){
        printf("equilateral triangle");
    }else{
        printf("not equilateral triangle");
    }
    return 0;
}