#include <stdio.h>
int main() {
    int AC;
    scanf("%d",&AC);
    if(AC>30)
        printf("cooling mode");
    else if(AC>=20 && AC<=30)
        printf("Normal mode");
    else
        printf("heating mode");
    return 0;
}