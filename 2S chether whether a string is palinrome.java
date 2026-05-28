import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
         Scanner s=new Scanner(System.in);
         String str=s.nextLine(),rev="";
         for(int i=str.length()-1;i>=0;i--){
             rev+=str.charAt(i);
         }
         if(str.equals(rev)){
             System.out.print("palindrome");
         }
         else{
             System.out.print("Not palindrome");
         }
    }
}