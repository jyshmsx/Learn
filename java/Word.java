import java.util.Scanner;
import java.util.Arrays;
import java.util.Comparator;
public class Word{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        String[] str = s.split(" ");
        Comparator cmp = new MyComparator();
        Arrays.sort(str, cmp);
        for(String name: str)
        {
            System.out.println(name);
        }
        scan.close();
    }
}

class MyComparator implements Comparator<String>{
    public int compare(String o1, String o2) {
        if(Character.toUpperCase(o1.charAt(0)) > Character.toUpperCase(o2.charAt(0)))
        {
            return 1;
        }
        else if(Character.toUpperCase(o1.charAt(0)) < Character.toUpperCase(o2.charAt(0)))
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }
}