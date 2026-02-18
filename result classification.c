#include <stdio.h>
int main() {
    int result;
    scanf("%d",&result);
    if(result>=50 && result<85)
        printf("pass");
    else if(result<=100 && result>=85)
        printf("Distinction");
    else
        printf("Fail");
    return 0;
}