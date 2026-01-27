#include <stdio.h>
int main() {
    int k,s;
    scanf("%d %d",&k,&s);
    printf("%d is smallest",  (k<s? k:s));
    return 0;
}