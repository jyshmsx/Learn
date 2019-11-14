package inclass.experiment.third;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Company cp = new Company("hrbust", 3);
        System.out.println("请输入各个员工的职位、姓名、日薪");
        for(int i = 0; i < cp.getStaffCount(); i++)
        {
            String position = sc.next();
            String SName = sc.next();
            int SSalary = sc.nextInt();
            cp.setCommonStaff(position, SName, SSalary, i);
        }
        System.out.println("设置各个员工签到情况");
        for(int i = 0; i < cp.getStaffCount(); i++)
        {
            int checkIn = sc.nextInt();
            cp.setStaffCheckIn(i, checkIn);;
        }
        System.out.println("显示各个员工情况");
        for(Staff st : cp.staff)
        {
            System.out.println(st);
        }
        System.out.println("显示公司情况");
        System.out.println(cp);
        sc.close();
    }
    
}