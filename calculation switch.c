#include <stdio.h>
int main() {
    char operater;
    int a,b;
    scanf("%d %c %d",&a,&operater,&b);
    switch (operater){
        case '+':
            printf("result=%d",a+b);
            break;
        case '-':
            printf("result=%d",a-b);
            break;
        case '*':
            printf("result=%d",a*b);
            break;
        case '/':
            if(b!=0)
                printf("result=%d",a/b);
            else
                printf("zero not allowed");
            break;
        default:
            printf("invalid operater");
    }
    return 0;
}