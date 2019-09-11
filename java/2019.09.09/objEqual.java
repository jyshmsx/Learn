package inclass.task.third;

import java.util.Scanner;

public class objEqual{
    public static void main(String[] args) {
        //Student类equals方法
        Scanner sc = new Scanner(System.in);
        Student s1 = new Student(sc.nextInt(), sc.next(), sc.nextInt());
        Student s2 = new Student(1, "a", 20);
        System.out.println(s2.equals(s1));
		
		//clone()方法
        Student a = new Student(1 , "a", 20);
        System.out.println("clone: " + a.clone().equals(a));
        sc.close();
    }
}