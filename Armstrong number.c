#include <stdio.h>
int main(){
    int n,temp,rem,sum=0;
    scanf("%d",&n);
    temp=n;
    for(;n>0;n=n/10){
        rem=n%10;
        sum=sum+(rem*rem*rem);
    }
    if(temp==sum)
        printf("Yes");
    else
        printf("No");
    return 0;    
}