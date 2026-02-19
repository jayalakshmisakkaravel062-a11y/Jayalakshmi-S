#include <stdio.h>
int main() {
    int n, data, totalData = 0, highUsage = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &data);
        totalData = totalData + data;
        if(data > 2) {
            highUsage++;
        }
    }
    printf("Total Data: %d\n", totalData);
    printf("High Usage Days: %d", highUsage);
    return 0;
}