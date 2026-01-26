#include <stdio.h>
int main() {
    int k;
    scanf("%d",&k);
    if(k>=18){
        printf("Eligible to vote");
    }else{
       printf("Not eligible to vote");
    }
    return 0;
}