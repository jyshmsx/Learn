import java.util.Scanner;
import java.io.*;
public class ArrayInClass{
    public static void main(String[] args)throws Exception{
        //不使用文件流，new File()改为System.in
        Scanner scan = new Scanner(new File("./ArrayInClass.txt"));
        Student [] st = new Student [5];
        System.out.println("从ArrayInClassStudent.txt中读取学生信息");
        for(int i = 0; i < 5; i++)
        {
            int ii = scan.nextInt();
            String n = scan.next();
            String s = scan.next();
            st[i] = new Student(ii,n,s);
            // st[i].set(x, n, s);
        }
        for(Student stu: st)
        {
            System.out.println("姓名: " + stu.getName() + " 学号: " + stu.getXh() + " 性别: " + stu.getSex());
        }
        scan.close();
    }
}
class Student{
    private int id;
    private String sex;
    private String name;
    public Student()
    {
        id = 0;
        sex = "";
        name = "";
    }
    public Student(int i, String s, String n)
    {
        id = i;
        sex = s;
        name = n;
    }
    public void set(int i, String n, String s)
    {
        id = i;
        sex = s; 
        name = n;
    }
    public int getXh()
    {
        return id;
    }
    public String getSex()
    {
        return sex;
    }
    public String getName()
    {
        return name;
    }
}