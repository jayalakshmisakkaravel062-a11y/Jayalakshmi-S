import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
         Scanner s=new Scanner(System.in);
         String str=s.nextLine();
         int vowels=0,consonant=0;
         char c[]=str.toCharArray();
         for(int i=0;i<c.length;i++){
             if(c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'||c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'){
                 vowels++;
             }
             else{
                 consonant++;
             }
         }
         System.out.print("vowels:"+vowels+" "+"consonant:"+consonant);
    }
}