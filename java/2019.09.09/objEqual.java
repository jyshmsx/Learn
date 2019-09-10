package inclass.task.third;

public class objEqual{
    public static void main(String[] args) {
        //Student类equals方法
        Student s1 = new Student(1, "a", 20);
        Student s2 = new Student(1, "a", 20);
        System.out.println(s2.equals(s1));
        // Student cloneS = (Student) a.clone();
        // System.out.println("clone: " + cloneS.equals(a));
    }
}