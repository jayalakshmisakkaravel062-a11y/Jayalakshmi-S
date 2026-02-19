#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int calls[N];
    int total = 0, overloaded = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &calls[i]);
        total += calls[i];
        if(calls[i] > 40)
            overloaded++;
    }
    printf("Total Calls: %d\n", total);
    printf("Overloaded Hours: %d", overloaded);
    return 0;
}