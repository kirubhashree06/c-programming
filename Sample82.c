#include<stdio.h>
int main() {
    int a,b,age;
    scanf("%d",&a);
    scanf("%d",&age);
    switch (a) {
        case 1:
            b=300;
            if (age<12) {
                b=b/2;
            }else if (age>=60){
                b=b-(b*0.33);
            }
            printf("%d",b);
            break;
        case 2:
            b=1000;
            if (age<12) {
                b=b/2;
            }
            printf("%d",b);
            return 0;
    }
}