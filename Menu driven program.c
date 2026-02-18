#include <stdio.h>
int main() {
    int choice;
    int a,b;
    scanf("%d",&choice);
    scanf("%d %d",&a,&b);
    switch (choice){
        case 1:
            printf("sum=%d",a+b);
            break;
        case 2:
            printf("diff=%d",a-b);
            break;
        case 3:
            printf("multiple=%d",a*b);
            break;
        case 4:
            printf("divisible=%d",a/b);
            break;
        default:
            printf("invalid number");
    }
    return 0;
}