#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int patients[N];
    int total = 0, overcrowded = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &patients[i]);
        total += patients[i];
        if(patients[i] > 100) {
            overcrowded++;
        }
    }
    printf("Total Patients: %d\n", total);
    printf("Overcrowded Days: %d", overcrowded);
    return 0;
}