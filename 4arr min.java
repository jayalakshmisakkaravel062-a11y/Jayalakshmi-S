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
        int min=b[0];
        for(int i=1;i<m;i++){
            if(min>b[i]){
                min=b[i];
            }
        }
        System.out.println(min);
    }
}