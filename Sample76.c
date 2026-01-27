#include<stdio.h>
int main(){
 
    int op;
   scanf("%d",&op);
    if(op>=1 && op<=12){
        
    
    if(op==2){
        printf("28 or 29 days");
    }
    else if(op%2==0 && op!=2){
        printf("30 days");
    }
    else if(op%2!=0){
        printf("31 days");
    }
    }
    else{
        printf("invalid");
    }
    
    
    return 0;
    
}