#include <stdio.h>
int main() {
    int attempt;
    scanf("%d",&attempt);
    if(attempt>=4)
        printf("Account locked");
    else 
        printf("Login Allowed");
    return 0;
}