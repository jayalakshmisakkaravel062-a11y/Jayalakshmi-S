import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        String Str=s.nextLine();
        char c[]=Str.toCharArray();
        int count=0;
        for(int i=0;i<c.length;i++){
            if(c[i]==' '){
                count++;
            }
        }
        System.out.println(count);
        }
}