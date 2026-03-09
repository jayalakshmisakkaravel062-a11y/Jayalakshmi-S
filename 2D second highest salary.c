#include <stdio.h>
#include <limits.h>
int main() {
   int R,c;
   scanf("%d %d",&R,&c);
   int a[R][c];
   int max;
   int second;
   for (int i=0;i<R;i++){
       for(int j=0;j<c;j++){
           scanf("%d",&a[i][j]);
           if(a[i][j]>max){
               second=max;
               max=a[i][j];
           }
           else if(a[i][j]>second && a[i][j]!=max){
               second=a[i][j];
           }
       }
   }
   printf("%d",second);
    return 0;
}