#include<stdio.h>
int main(){
    int k;
    printf("sunday=1\n");
    printf("monday=2\n");
    printf("tuesday=3\n");
    printf("wednesday=4\n");
    printf("thursday=5\n");
    printf("friday=6\n");
    printf("saturday=7\n");
    scanf("%d",&k);
    switch(k){
        case 1:
        printf("sunday");
        break;
         case 2:
        printf("monday");
        break;
         case 3:
        printf("tuesday");
        break;
         case 4:
        printf("wednesday");
        break;
        case 5:
        printf("thursday");
        break;
        case 6:
        printf("friday");
        break;
        case 7:
        printf("saturday");
        break;
    }
    return 0;  
}