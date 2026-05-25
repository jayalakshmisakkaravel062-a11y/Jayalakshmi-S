import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++){
            a[i]=s.nextInt();
        }
        int min=a[0];
        System.out.print(a[0]+" ");
        for(int i=0;i<n;i++){
            if(a[i]<min){
                System.out.print(a[i]+" ");
                min=a[i];
            }
        }
    }
}