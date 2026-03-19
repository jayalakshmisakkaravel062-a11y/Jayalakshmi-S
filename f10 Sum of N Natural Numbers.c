#include <stdio.h>
int sumNatural(int n)
{
    int sum=0,i;    
    for(i=1;i<=n;i++)
        sum+=i;       
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);   
    printf("%d",sumNatural(n));   
    return 0;
}