#include <stdio.h>
int main() {
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=a;
    c/=b;
    d=a;
    d%=b;
    printf("%d %d",c,d);
    return 0;
}