import java.util.Scanner;
import java.util.Arrays;
public class Word{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        String[] str = s.split(" ");
        Arrays.sort(str, String.CASE_INSENSITIVE_ORDER);
        for(String name: str)
        {
            System.out.println(name);
        }
        scan.close();
    }
}