#include <stdio.h>
int main() {
    int initialCash, N;
    scanf("%d", &initialCash);
    scanf("%d", &N);
    int withdrawal;
    int balance = initialCash;
    int riskCount = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &withdrawal);
        balance -= withdrawal;
        if(balance < 5000)
            riskCount++;
    }
    printf("Remaining Cash: %d\n", balance);
    printf("Risk Count: %d", riskCount);
    return 0;
}