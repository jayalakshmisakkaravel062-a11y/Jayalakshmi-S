#include <stdio.h>
void printPattern(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            int min=i;
            if(j<min){
                min=j;
            }
            if(n-i+1<min){
                min=n-i+1;
            }
            if(n-j+1<min){
                min=n-j+1;
            }printf("%d ",(n/2+2)-min);
        }printf("\n");
    }
}
    int main(){
        int m;
        scanf("%d",&m);
        printPattern(m);
        printf("\n");
    return 0;
}