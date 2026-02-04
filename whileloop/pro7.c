#include <stdio.h>
int main() {
        int capacity,n,change,bed=0,critical;
        scanf("%d", &capacity);
        scanf("%d", &n);
        while(n>0) {
            scanf("%d", &change);
            n--;
            bed += change;       
            if(bed> capacity * 0.9) {  
                critical++;
            }
        }
        printf(" %d\n", bed);
        printf("%d\n", critical);
        return 0;
    }