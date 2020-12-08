import java.util.Scanner;

public class Palindrome {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int T;
        T = input.nextInt();
        for(int i=1; i<=T; i++){
            int num = input.nextInt();
            StringBuilder str1 = new StringBuilder(Integer.toString(num));
            String str2 = Integer.toString(num);
            str1.reverse();
            if(str2.equals(str1.toString())){
                System.out.println("Case "+i+": Yes");
            }
            else
                System.out.println("Case "+i+": No");
        }
    }
}
