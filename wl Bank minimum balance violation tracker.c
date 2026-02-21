#include <stdio.h>
int main() {
    int N, i = 0;
    scanf("%d", &N);
    int balance;
    scanf("%d", &balance);
    int transaction, lowDays = 0;
    while(i < N) {
        scanf("%d", &transaction);
        balance += transaction;
        if(balance < 2000)
            lowDays++;
        i++;
    }
    printf("Final Balance: %d\n", balance);
    printf("Low Balance Days: %d\n", lowDays);
    return 0;
}