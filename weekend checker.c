#include <stdio.h>
int main() {
    int week;
    scanf("%d",&week);
    if(week>=1 && week<=5)
        printf("weekday");
    else if(week==6 || week==7)
        printf("weekend");
    else 
        printf("invalid input");
    return 0;
}