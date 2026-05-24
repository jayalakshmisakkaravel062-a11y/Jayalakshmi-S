import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt(),odd=0,even=0;
        int a[]=new int[n];
        for(int i=0;i<n;i++){
            a[i]=s.nextInt();
        }
       int  count=0;
        for(int i=0;i<n;i++){
           if(a[i]==1){
                System.out.print("1 ");
                count++;
           }
        }
        for(int i=count;i<n;i++){
                System.out.print("0 ");
        }
    }
}