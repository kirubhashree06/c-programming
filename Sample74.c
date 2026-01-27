#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int k;
    printf("result=1\n");
    scanf("%d",&k);
    switch(k){
        case 1:
        printf("sum: %d",x+y);
        break;
    }
    return 0; 
}