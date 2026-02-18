#include <stdio.h>
int main() {
    int Battery;
    scanf("%d",&Battery);
    if(Battery>=20)
        printf("Battery ok");
    else 
        printf("low Battery");
    return 0;
}