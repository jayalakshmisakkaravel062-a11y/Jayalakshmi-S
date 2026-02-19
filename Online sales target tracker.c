#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int revenue[N];
    int total = 0, targetDays = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &revenue[i]);
        total += revenue[i];
        if(revenue[i] > 50000)
            targetDays++;
    }
    printf("Total Revenue: %d\n", total);
    printf("Target Days: %d", targetDays);
    return 0;
}