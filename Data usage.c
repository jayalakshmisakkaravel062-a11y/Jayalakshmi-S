#include <stdio.h>
int main() {
    float gb;
    scanf("%f",&gb);
    if(gb>=2.5)
        printf("Data limit exceeded");
    else 
        printf("Data within limit");
    return 0;
}