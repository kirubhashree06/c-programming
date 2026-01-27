#include <stdio.h>
int main() {
    int k;
    scanf("%d",&k);
    if(k % 11 == 0){
        printf("divisible by 11");
    }else{
        printf("not divisible by 11");
    }
    return 0;
}