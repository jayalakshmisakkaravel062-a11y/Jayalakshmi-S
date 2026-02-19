#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int voltage[N];
    int min, lowCount = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &voltage[i]);
        if(i == 0)
            min = voltage[i];
        if(voltage[i] < min)
            min = voltage[i];
        if(voltage[i] < 210)
            lowCount++;
    }
    printf("Minimum Voltage: %d\n", min);
    printf("Low Voltage Events: %d", lowCount);
    return 0;
}