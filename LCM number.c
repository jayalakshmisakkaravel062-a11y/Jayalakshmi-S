#include <stdio.h>
int main(){
    int a,b,lcm,fact=1;
    scanf("%d %d",&a,&b);
    lcm=a>b ?a :b;
    while(fact){
        if(lcm%a==0 && lcm%b==0){
            printf("%d",lcm);
            break;
        }
        ++lcm;
    }
    return 0;    
}