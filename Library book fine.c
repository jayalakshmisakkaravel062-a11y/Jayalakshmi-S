#include <stdio.h>
int main() {
    int days;
    scanf("%d",&days);
    if(days>7)
        printf("Fine applied");
    else
        printf("No fine");
    return 0;
}