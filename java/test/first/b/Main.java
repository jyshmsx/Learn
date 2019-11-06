package inclass.test.first.b;

import java.util.Scanner;

public class Main {
    public static void main(String args[]) {    
        Member mb = new Member();
        MemberManager mm = new MemberManager();
        String userName, userPasw1, userPasw2;
        Scanner sc = new Scanner(System.in);
        System.out.println("输入用户名");
        userName = sc.next();
        System.out.println("输入密码");
        userPasw1 = sc.next();
        System.out.println("输入确认密码");
        userPasw2 = sc.next();
        mm.register(mb, userName, userPasw1, userPasw2);
        sc.close();
    }
}