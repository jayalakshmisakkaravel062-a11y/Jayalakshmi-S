#include <stdio.h>
int main() {
    int n,i,amount,total=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&amount);
        total=total+amount;
    }
    if (total<=10000){
        printf("Approved");
    }
    else{
        printf("Limit exceeded");
        }
    return 0;
}