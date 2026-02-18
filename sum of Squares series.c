#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int count=1;count<=n;count++){
        sum=sum+(count*count);
    }
    printf("%d",sum);
    return 0;    
}