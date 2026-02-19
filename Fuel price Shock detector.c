#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int price[N];
    int highest, count = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &price[i]);
        if(i == 0)
            highest = price[i];
        if(price[i] > highest)
            highest = price[i];
        if(price[i] > 100)
            count++;
    }
    printf("Highest Price: %d\n", highest);
    printf("High Price Days: %d", count);
    return 0;
}
