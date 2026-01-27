#include <stdio.h>
int main() {
    int k;
    scanf("%d",&k);
    if(k>=90){
        printf("grade A");
    }else if(k>=75 && k<90){
        printf("grade B");
    }else{
        printf("fail");
    }
    return 0;
}