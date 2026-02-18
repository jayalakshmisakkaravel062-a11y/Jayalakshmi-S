#include <stdio.h>
int main(){
    int n,temp,rev=0;
    scanf("%d",&n);
    temp=n;
    for(;n>0;n=n/10){
        rev=rev*10+(n%10);
    }
    if(temp==rev)
        printf("Yes");
    else
        printf("No");
    return 0;    
}