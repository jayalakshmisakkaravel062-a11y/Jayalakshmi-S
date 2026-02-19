#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int hours[N];
    int total = 0, heavy = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &hours[i]);
        total += hours[i];
        if(hours[i] > 3)
            heavy++;
    }
    int cost = total * 200;
    printf("Total Overtime Hours: %d\n", total);
    printf("Overtime Cost: %d\n", cost);
    printf("Heavy Overtime Days: %d", heavy);
    return 0;
}