#include <stdio.h>
int findMax(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int result = findMax(a, b);
    printf("%d", result);
    return 0;
}