#include <stdio.h>
int main() {
    int totalData;
    int N;
    scanf("%d", &totalData);
    scanf("%d", &N);
    int usage[N];
    int i = 0;
    while(i < N) {
        scanf("%d", &usage[i]);
        i++;
    }
    int daysUsed = 0;
    i = 0;
    while(i < N && totalData > 0) {
        totalData = totalData - usage[i];
        daysUsed++;
        if(totalData <= 0) {
            totalData = 0; 
            break;
        }
        i++;
    }
    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB\n", totalData);
    return 0;
}