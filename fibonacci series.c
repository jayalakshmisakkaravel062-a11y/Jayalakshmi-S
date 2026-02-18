#include <stdio.h>
int main(){
    int n,temp,i;
    scanf("%d",&n);
    int first=0,second=1;
    if(1<=n){
        printf("%d ",first);
    }
    if(2<=n){
        printf("%d ",second);
    }
    for(i=2;i<n;i++){
        temp=first+second;
        first=second;
        second=temp;
        printf("%d ",second);
    }
   return 0;
}