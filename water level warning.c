#include <stdio.h>
int main() {
    int waterLevel;
    scanf("%d",&waterLevel);
    if(waterLevel>90)
        printf("Overflow warning");
    else 
        printf("safe level");
    return 0;
}