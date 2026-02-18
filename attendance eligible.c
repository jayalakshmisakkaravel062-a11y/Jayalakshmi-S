#include <stdio.h>
int main() {
    int attendance;
    scanf("%d",&attendance);
    if(attendance>=75)
        printf("Eligible for exam");
    else 
        printf("Not eligible");
    return 0;
}