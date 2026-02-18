#include <stdio.h>
int main() {
    int n,i,total=0,Overspend=0,e;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&e);
        total+=e;
        if (e>1000){
            Overspend++;
        }
    }
    printf("total expense:%d\n",total);
    printf("overpend Days:%d\n",Overspend);
    return 0;
}