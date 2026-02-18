#include <stdio.h>
int main() {
    int account;
    scanf("%d",&account);
    if(account>=1000)
        printf("Sufficient Balance");
    else 
        printf("Low Balance");
    return 0;
}