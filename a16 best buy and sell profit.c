#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int min = arr[0];
    int maxProfit = INT_MIN;
    for(int i = 1; i < n; i++) {
        if(arr[i] - min > maxProfit)
            maxProfit = arr[i] - min;
        if(arr[i] < min)
            min = arr[i];
    }
    printf("%d", maxProfit);
    return 0;
}