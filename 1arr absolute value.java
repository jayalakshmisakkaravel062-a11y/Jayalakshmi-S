import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt(),odd=0,even=0;
        int a[]=new int[n];
        for(int i=0;i<n;i++){
            a[i]=s.nextInt();
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                even=even+a[i];
            }
            else{
                odd=odd+a[i];
            }
        }
        if(odd>even){
            System.out.print(odd-even);
        }
        else{
            System.out.print(even-odd);
        }
    }
}