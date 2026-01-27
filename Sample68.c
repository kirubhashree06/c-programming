#include <stdio.h>
int main() {
    int k,s,m;
    scanf("%d %d %d",&k,&s,&m);
    if(k+s+m==180){
        printf("valid triangle");
    }else{
        printf("not valid triangle");
    }
    return 0;
}
  