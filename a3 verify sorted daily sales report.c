#include <stdio.h>
int main(){
    int n,flag=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            flag=0;
            break;
        }
    }
    if(flag) printf("Yes");
    else printf("No");
    return 0;
}