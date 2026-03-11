#include<stdio.h>
int main(){
    int i=0,len=0;
    char str[100];
    scanf("%s",str);
    while (str[i]!='\0'){
        len++;
        i++;
    }
    for (int i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}