import java.util.Scanner;
public class Diagonal {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int r=s.nextInt(),c=s.nextInt();
        Diagonal m=new Diagonal();
        int a[][]=new int[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                a[i][j]=s.nextInt();
            }                                                    
        }
        m.result(r,c,a);
    }
    public void result(int r,int c,int a[][]){
        int sum=0;
        for(int i=0;i<r;i++){
             for(int j=0;j<c;j++){
                 if(i!=j && a[i][j]!=0){
                     System.out.print("Not Giagonal Matrix");
                     return;
                 }
            }
        }
        System.out.print("Diagonal Matrix");
    }
}