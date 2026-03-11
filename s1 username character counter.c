#include<stdio.h>
int main(){
    int i=0,count=0;
    char str[100];
    scanf("%s",&str);
    while(str[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}
