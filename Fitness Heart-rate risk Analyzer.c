#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int heart[N];
    int max, danger = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &heart[i]);
        if(i == 0)
            max = heart[i];
        if(heart[i] > max)
            max = heart[i];
        if(heart[i] > 140)
            danger++;
    }
    printf("Max Heart Rate: %d\n", max);
    printf("Danger Readings: %d", danger);
    return 0;
}