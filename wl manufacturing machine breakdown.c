#include <stdio.h>
int main() {
    int N, i = 0, unsafe = 0, streak = 0, breakdown = -1;
    scanf("%d", &N);
    int vib;
    while(i < N) {
        scanf("%d", &vib);
        if(vib > 70) {
            unsafe++;
            streak++;
            if(streak == 3 && breakdown == -1)
                breakdown = i + 1;
        } else {
            streak = 0;
        }
        i++;
    }
    if(breakdown == -1)
        printf("Breakdown At Reading: Not Occurred\n");
    else
        printf("Breakdown At Reading: %d\n", breakdown);
    printf("Unsafe Readings: %d\n", unsafe);
    return 0;
}