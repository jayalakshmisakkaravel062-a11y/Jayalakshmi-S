#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);  
    int i=0;
    int payment[n];
    while (i<n){
        scanf("%d",&payment[i]);
        i++;
    }
    int streak=0,maxstreak=0;
    i=0;
    while(i<n){
        if(payment[i]==0){
            streak++;
            if(streak>maxstreak)
                maxstreak=streak;
        }else{
            streak=0;
        }
        i++;
    }
    printf("Longest default streak:%d\n",maxstreak);
    return 0;
}