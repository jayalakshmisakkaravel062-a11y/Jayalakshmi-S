#include <stdio.h>
int leap(int y)
{
    if((y%4==0 && y%100!=0) || y%400==0)
        return 1;
    else
        return 0;
}
int main()
{
    int y;
    scanf("%d",&y);    
    if(leap(y))
        printf("Leap Year");
    else
        printf("Not Leap Year");       
    return 0;
}