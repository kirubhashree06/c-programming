#include <stdio.h>
int main() {
    int k;
    scanf("%d",&k);
    if(k % 3 == 0 && k % 7 == 0){
        printf("%d is number multiple of both 3 and 7",k);
    }else{
        printf("%d is number not multiple of both 3 and 7",k);
    }
    return 0;
}