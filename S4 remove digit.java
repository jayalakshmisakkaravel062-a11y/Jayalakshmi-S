import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        String Str=s.nextLine();
        char c[]=Str.toCharArray();
        String d="";
        for(int i=0;i<c.length;i++){
            if(!(c[i]>='0'&& c[i]<='9')){
                 d+=c[i];
            }
        }
        System.out.print(d);
    }
}