import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++){
            a[i]=s.nextInt();
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]>a[j]){
                   int temp=a[i];
                   a[i]=a[j];
                   a[j]=temp;
                }
            }
        }
        int m=0,l=n-1;
        for(int i=0;i<n;i++){
            if(i%2==0){
             System.out.print(a[l]+" ");
             l=l-1;
            }
            else{
                System.out.print(a[m]+" ");
                m=m+1;
            }
        }
    }
}