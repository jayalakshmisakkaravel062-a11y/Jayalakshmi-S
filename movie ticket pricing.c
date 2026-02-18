#include <stdio.h>
int main() {
    int age;
    scanf("%d",&age);
    if(age<12)
        printf("Discount ticket");
    else 
        printf("Regular ticket");
    return 0;
}