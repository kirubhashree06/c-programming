#include <stdio.h>
int main(){
int atm,n,m;
scanf("%d",&atm);
scanf("%d%d",&n,&m);

switch (atm) {
    case 1:

        if(n>=m) {
            printf("transaction sucessfull ");
        }else {
            printf(("limited exceeded"));
        }
        break;
    case 2:
        if (n<=m) {
            printf("transaction sucessfull ");
        }else {
            printf(("limited exceeded"));
        }
        break;
}



return 0;
}