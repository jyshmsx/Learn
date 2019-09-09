package inclass.task.third;

public class objEqual{
    public static void main(String[] args) {

        //Object类转Student？
        Object b = new Student(1,"a",20);
        Student a = (Student)b;
        //a = new Student(1,"a",20);
        System.out.println(a);

        //Student类equals方法
        Student s1 = new Student(1, "a", 20);
        System.out.println(a.equals(s1));
        // Student cloneS = (Student) a.clone();
        // System.out.println("clone: " + cloneS.equals(a));
    }
}