import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int [n];
        for(int i=0;i<n;i++){
            a[i]=s.nextInt();
        }
        arr(a,n);
    
    }
    public static void arr(int b[],int m){
        int max=0;
        for(int i=0;i<m;i++){
            if(max<b[i]){
                max=b[i];
            }
        }
        System.out.println(max);
    }
}