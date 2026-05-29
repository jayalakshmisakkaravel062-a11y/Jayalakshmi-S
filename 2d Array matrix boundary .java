import java.util.Scanner;
public class FirstMatrix {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int r=s.nextInt(),c=s.nextInt();
        FirstMatrix m=new FirstMatrix();
        int a[][]=new int[r][c];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                a[i][j]=s.nextInt();
            }                                                    
        }
        m.matrixcreation(r,c,a);
    }
    public void matrixcreation(int r,int c,int a[][]){
        for(int j=0;j<c;j++){
             for(int i=0;i<r;i++){
                if(i==0||i==r-1||j==0||j==c-1){
                    System.out.print(a[i][j]+" ");
                }
                else{
                    System.out.print("  ");
                }
            }
             System.out.println();
        }
    }
}