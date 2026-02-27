#include <stdio.h>
int main() 
{
    int N;
    int fare;
    int total = 0;
    int i = 1;
    printf("Enter number of passengers: ");
    scanf("%d", &N);
    while(i <= N)
    {
        printf("Enter fare of passenger %d: ", i);
        scanf("%d", &fare);

        total = total + fare;
        i++;
    }
    printf("Total Collection: ₹%d", total);
    return 0;
}