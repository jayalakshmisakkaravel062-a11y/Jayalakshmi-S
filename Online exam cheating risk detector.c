#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int risk[N];
    int total = 0, highRisk = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &risk[i]);
        total += risk[i];
        if(risk[i] > 50)
            highRisk++;
    }
    printf("Total Risk: %d\n", total);
    printf("High Risk Sessions: %d", highRisk);
    return 0;
}