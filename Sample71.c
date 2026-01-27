#include <stdio.h>
int main() {
    int k;
    scanf("%d",&k);
    int bill = k*5;
    if(k*5==600){
        printf("Bill amount = Rs. %d",bill);
    }else {
        printf("invalid");
    }
    return 0;
}
  