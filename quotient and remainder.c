#include <stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=a/b;
    d=a%b;
    printf("Quotient=%d",c);
    printf(" Remainder=%d",d);
    return 0;
}