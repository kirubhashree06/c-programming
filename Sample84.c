include <stdio.h>
int main() {
  int order,a,b;
  scanf(("%d"),&order);
  scanf("%d",&b);
  switch(order) {
    case 1:
    a=50;
    break;
    case 2:
      if (b<1000) {
        a=100;
        break;
      }
      else {
        a=0;
      }
        break;


  }
  printf("%d",a);
  return 0;

}