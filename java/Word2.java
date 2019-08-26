import java.util.Scanner;
public class Word2{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        char [] ch = s.toCharArray();
        for(int i = 0; i < s.length() - 1; i++)
        {
            for(int j = i + 1; j < s.length() - 1; j++)
            {
                if((ch[i]==ch[j] && ch[i]!=0 && ch[j]!=0))
                {
                    ch[j] = 0;
                }
            }
        }
        for(int i = 0; i < s.length() - 1; i++)
        {
            if(ch[i]  != 0)
                System.out.print(ch[i]);
        }
        System.out.println();
        scan.close();
    }
}