#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int delay[N];
    int total = 0, delayed = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &delay[i]);
        total += delay[i];
        if(delay[i] > 30)
            delayed++;
    }
    printf("Total Delay: %d\n", total);
    printf("Delayed Deliveries: %d", delayed);
    return 0;
}
