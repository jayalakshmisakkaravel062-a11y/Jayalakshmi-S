#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int noise[N];
    int max, noisy = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &noise[i]);
        if(i == 0)
            max = noise[i];
        if(noise[i] > max)
            max = noise[i];
        if(noise[i] > 70)
            noisy++;
    }
    printf("Maximum Noise: %d\n", max);
    printf("Noisy Periods: %d", noisy);
    return 0;
}