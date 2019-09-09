import java.util.Scanner;
import java.io.*;
import java.util.Arrays;
public class ArrayInClassSort{
    public static void main(String[] args) throws Exception{
        int [] first = new int [5];
        int [] second = new int [5];
        //不使用文件流，则使用new Scanner(System.in)
        Scanner sc = new Scanner(new File("./ArrayInClassSort.txt"));
        for(int i = 0; i < first.length; i++)
        {
            first[i] = sc.nextInt();
        }
        for(int i = 0; i < second.length; i++)
        {
            second[i] = sc.nextInt();
        }
        int [] result = Arrays.copyOf(first, first.length + second.length);
        System.arraycopy(second, 0, result, first.length, second.length);
        Arrays.sort(result);
        for(int a: result)
        {
            System.out.println(a);
        }
        sc.close();
    }
}