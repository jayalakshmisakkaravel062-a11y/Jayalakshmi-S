#include <stdio.h>
int main() {
    int capacity, N;
    scanf("%d", &capacity);
    scanf("%d", &N);
    int items;
    int remaining = capacity;
    int overflowDays = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &items);
        remaining -= items;
        if(remaining < 0)
            overflowDays++;
    }
    printf("Remaining Capacity: %d\n", remaining);
    printf("Overflow Days: %d", overflowDays);
    return 0;
}