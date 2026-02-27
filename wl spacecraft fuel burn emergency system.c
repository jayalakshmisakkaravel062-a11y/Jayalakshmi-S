#include <stdio.h>

int main() {
    int fuel, N;
    scanf("%d", &fuel);
    scanf("%d", &N);

    int burn, i = 0;
    int emergencyStage = -1;
    int wastedFuel = 0;

    while(i < N) {
        scanf("%d", &burn);

        fuel -= burn;

        if(fuel < 0 && emergencyStage == -1) {
            emergencyStage = i + 1; // stage number (1-based)
            wastedFuel = -fuel; // extra fuel demanded
        }

        i++;
    }

    if(emergencyStage == -1)
        printf("Emergency Stage: Not Occurred\n");
    else
        printf("Emergency Stage: %d\n", emergencyStage);

    printf("Fuel Wasted: %d\n", wastedFuel);

    return 0;
}