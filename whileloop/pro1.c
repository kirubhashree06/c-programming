
#include<stdio.h>
    int main() {
        int n,n1;
        scanf("%d",&n);
        int v=0;
        int cs=0,ls=0;
        while (n>0) {
            scanf("%d",&n1);
            v++;
            cs++;
            if (n1>70){
                if (cs>ls) {
                    ls=cs;
                }
                else {
                    cs=0;
                }
                n--;
            }
            printf("Noise Voilation: %d",ls);
            printf("\n");
            printf("Longest Voilation Streak : %d",v);
            return 0;
        }
    }
