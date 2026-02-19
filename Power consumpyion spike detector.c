#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int units[N];
    int total = 0, spike = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &units[i]);
        total += units[i];
        if(units[i] > 5)
            spike++;
    }
    printf("Total Units: %d\n", total);
    printf("Spike Hours: %d", spike);
    return 0;
}