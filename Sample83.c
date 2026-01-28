#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    switch (a) {
        case 1:
            c=199;
        case 11:
            c= c-20;
            break;
        case 2:
            c=399;
            c=c-20;
            break;
    }
    printf("%d",c);
    return 0;
}