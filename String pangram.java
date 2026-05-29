import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        String str=s.nextLine();
        char c[]=str.toCharArray();
        boolean alpha[]=new boolean[26];
        int index=0;
        for(int i=0;i<c.length;i++){
            if(c[i]>='a'&& c[i]<='z'){
                index=c[i]-'a';
            }
            if(c[i]>='A' && c[i]<='Z'){
                index=c[i]-'A';
            }
            if(index>=0&& index<=25){
                alpha[index]=true;
            }
        }
        for(int i=0;i<26;i++){
            if(alpha[i]==false){
                System.out.print("Not Pangram");
                return;
            }
        }
        System.out.print("Pangram");
    }
}