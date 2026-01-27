#include<stdio.h>
int main(){
    int a,b,num;
    scanf("%d",&num);
    switch(num){
        case 1:
        scanf("%d %d",&a,&b);
        printf("%d",a+b);
        break;
    }
    return 0; 
}