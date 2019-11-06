package inclass.test.first.a;

import java.util.Scanner;

public class A {
    public static int lastIndexOf(int [] obj, int n)
    {   
        boolean flag = false;
        int re = 0;
        for(int i = 0; i < obj.length; i++)
        {
            if(obj[i] == n)
            {
                flag = true;
                re = i;
            }
        }
        if(flag)
        {
            return re;
        }
        else
        {
            return -1;
        }
    }
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int [] obj = new int [10];
        for(int i = 0; i < obj.length ;i++)
        {
            obj[i] = sc.nextInt();
        }
        System.out.println(lastIndexOf(obj, n));
        sc.close();
    }
}