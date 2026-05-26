import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        String Str=s.nextLine(),d="";
        char c[]=Str.toCharArray();
        for(int i=0;i<c.length;i++){
            if((c[i]>='0'&& c[i]<='9') ||(c[i]>='a' && c[i]<='z')||(c[i]>='A'&& c[i]<='Z')){
                 d+=c[i];
            }
        }
        System.out.print(d);
    }
}