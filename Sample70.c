#include <stdio.h>
int main() {
    int k;
    scanf("%d",&k);
    if(k>=10 && k<=20){
        printf("%d is within range",k);
    }else{
        printf("%d is not within range",k);
    }
    return 0;
}
