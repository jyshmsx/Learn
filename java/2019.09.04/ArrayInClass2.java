import java.util.Scanner;
import java.io.*;
public class ArrayInClass2{
    public static void main(String[] args) throws Exception{
        int [] ai = new int [10];
        //不使用文件流，new File()改为System.in
        Scanner scan = new Scanner(new File("./ArrayInClass2.txt"));
        StringBuffer sb = new StringBuffer();
        for(int i = 0; i < 10; i++)
        {
            ai[i] = scan.nextInt();
            if(ai[i] != 0)
                sb.append(ai[i]);
        }
        //如果for循环中不使用if去除0
        // while(b.indexOf("0") >= 0)
        // {
        //     b.delete(b.indexOf("0"), b.indexOf("0") + 1);
        // }
        int [] resultA = new int[sb.length()];
        for(int i = 0; i < resultA.length; i++)
        {
            resultA[i] = sb.charAt(i) - '0';
            System.out.print(resultA[i]);
        }
        System.out.println();
        scan.close();
    }
}