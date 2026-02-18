#include <stdio.h>
int main() {
    int cart_Value;
    scanf("%d",&cart_Value);
    if(cart_Value>=499)
        printf("Free delivery");
    else 
        printf("Delivery charges apply");
    return 0;
}