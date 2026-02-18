#include <stdio.h>
int main() {
    int ticket;
    scanf("%d",&ticket);
    if(ticket>0)
        printf("Confirmed");
    else if(ticket==0)
        printf("Waiting list");
    return 0;
}