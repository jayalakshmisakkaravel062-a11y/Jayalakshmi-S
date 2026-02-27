#include <stdio.h>
int main() {
    int N, i = 0, fail = 0, streak = 0, lock = -1;
    scanf("%d", &N);
    int attempt;
    while(i < N) {
        scanf("%d", &attempt);
        if(attempt == 0) {
            fail++;
            streak++;
            if(streak == 3 && lock == -1)
                lock = i + 1;
        } else {
            streak = 0;
        }
        i++;
    }
    if(lock == -1)
        printf("Lock Triggered At Attempt: Not Locked\n");
    else
        printf("Lock Triggered At Attempt: %d\n", lock);
    printf("Total Failed Attempts: %d\n", fail);
    return 0;
}