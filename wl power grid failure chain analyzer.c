#include <stdio.h>
int main() {
    int capacity, N;
    scanf("%d%d", &capacity, &N);
    int load, safe = 0, fail = 0, i = 0;
    while(i < N) {
        scanf("%d", &load);
        if(load > capacity)
            fail++;
        else
            safe++;
        i++;
    }
    printf("Safe Hours: %d\n", safe);
    printf("Failure Count: %d\n", fail);
    return 0;
}
