import java.util.Scanner;
public class  Main{
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int r=s.nextInt(),c=s.nextInt();
        int a[][]=new int[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                a[i][j]=s.nextInt();
            }                                                    
        }
        int sum=0;
        for(int j=0;j<c;j++){
             for(int i=0;i<r;i++){
                 sum=sum+a[i][j];
            }
            System.out.print(sum+" ");
            sum=0;
        }
    }
}