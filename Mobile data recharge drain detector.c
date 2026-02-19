#include <stdio.h>
int main() {
    int totalData, N;
    scanf("%d", &totalData);
    scanf("%d", &N);
    int usage;
    int remaining = totalData;
    int successfulDays = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &usage);
        remaining -= usage;
        if(remaining >= 0) {
            successfulDays++;
        }
    }
    printf("Remaining Data: %d\n", remaining);
    printf("Successful Days: %d", successfulDays);
    return 0;
}