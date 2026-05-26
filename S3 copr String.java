import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        String Str=s.nextLine();
        char c[]=Str.toCharArray();
        for(int i=0;i<c.length;i++){
            System.out.print(c[i]);
        }
    }
}



===================
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        String Str=s.nextLine();
        String Str1=Str;
        System.out.print(Str1);
    }
}