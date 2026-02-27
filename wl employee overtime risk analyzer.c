#include <stdio.h>
int main() {
    int N, i = 0, total = 0, burnout = 0;
    scanf("%d", &N);
    int hours;
    while(i < N) {
        scanf("%d", &hours);
        total += hours;
        if(hours > 4)
            burnout++;
        i++;
    }
    printf("Total Overtime: %d\n", total);
    printf("Burnout Days: %d\n", burnout);
    return 0;
}