#include <stdio.h>
int main() {
    int k;
    scanf("%d",&k);
    if((k%4==0 && k%100!=0) || (k%400==0)){
            printf("leap year");
    }else{
            printf("not a leap year");
    }
    return 0;
}