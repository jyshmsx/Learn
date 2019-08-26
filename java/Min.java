import java.util.Scanner;

public class Min{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int [] cou = new int [10];
        int cm = 0;
        for(int i = 0; i < 10; i++)
        {
            cou[i] = scan.nextInt();
            if(cou[i] < cm && i != 0)
            {
                cm = cou[i];
            }
            else if(i == 0)
            {
                cm = cou[i];
            }
        }
        System.out.println(cm);
        scan.close();
    }
}