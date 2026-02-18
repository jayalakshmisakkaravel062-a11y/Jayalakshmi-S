#include <stdio.h>
int main(){
    int n,dec=0,b=1,rem;
    scanf("%d",&n);
    for(;n>0;n=n/10){
        rem=n%10;
        dec=dec+rem*b;
        b=b*2;
    }
    printf("%d",dec);
    return 0;    
}