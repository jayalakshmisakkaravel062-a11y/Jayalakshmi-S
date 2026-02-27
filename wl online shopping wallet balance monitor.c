#include <stdio.h>
int main() {
    int balance, N;
    scanf("%d%d", &balance, &N);
    int purchase, success = 0, i = 0;
    while(i < N) {
        scanf("%d", &purchase);
        if(balance < purchase)
            break;
        balance -= purchase;
        success++;
        i++;
    }
    printf("Successful Purchases: %d\n", success);
    printf("Final Balance: %d\n", balance);
    return 0;
}