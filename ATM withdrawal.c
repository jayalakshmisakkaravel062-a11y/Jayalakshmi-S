#include <stdio.h>
int main() {
    int amount;
    scanf("%d",&amount);
    if(amount>=500)
        printf("Valid amount");
    else 
        printf("Invalid amount");
    return 0;
}