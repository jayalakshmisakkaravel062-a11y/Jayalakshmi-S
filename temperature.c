#include <stdio.h>
int main() {
    int tem;
    scanf("%d",&tem);
    if(tem<20)
        printf("cold");
    else if(tem>=20 && tem<=30)
        printf("Normal");
    else
        printf("Hot");
    return 0;
}