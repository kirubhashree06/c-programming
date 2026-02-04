#include <stdio.h>
int main() {
   int max,n,arrive,add=0,final=0;
   scanf("%d",&max);
   scanf("%d",&n);
   while (n>0) {
      scanf("%d",&arrive);
      n--;
      if (add+arrive<=max) {
         add+=arrive;
      }
      else {
         final += (add+arrive-max);
         add=max;
      }
   }
   printf("%d",add);
   printf("%d",final);
   return 0;
}