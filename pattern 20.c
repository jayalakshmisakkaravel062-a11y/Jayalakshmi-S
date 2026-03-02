#include <stdio.h>
int main() {
    int i,j,n,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        for(int space=1;space<=2*(n-i);space++){
            printf("  ");
        }
        for(j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}