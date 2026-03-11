#include<stdio.h>
int main(){
    int i=0;
    char str[100];
    scanf("%s",str);
    while(str[i]!='@'){
        printf("%c",str[i]);
        i++;
    }
    return 0;
}