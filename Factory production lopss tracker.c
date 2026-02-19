#include <stdio.h>
int main() {
    int n, loss, totalLoss = 0, highLossDays = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &loss);
        totalLoss = totalLoss + loss;
        if(loss > 100) {
            highLossDays++;
        }
    }
    printf("Total Loss: %d\n", totalLoss);
    printf("High Loss Days: %d", highLossDays);
    return 0;
}