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
            int max=a[0][j];
             for(int i=0;i<r;i++){
                if(max<a[i][j]){
                    max=a[i][j];
                }
            }
             System.out.println(max);
        }
    }
}