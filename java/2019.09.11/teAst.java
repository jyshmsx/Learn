package inclass.task.fourth;

import java.util.Objects;

public class teAst {
    public static void main(String[] args) {
        Student s1 = new Student (1, "a", 20);
        Teacher t1 = new Teacher(1, "a", 20);
        System.out.println(s1);
        System.out.println(t1);
        //System.out.println(s1.equals(t1));
        // System.out.println(s1.hashCode());
        // System.out.println(s1.clone().hashCode() == s1.hashCode());
        System.out.println(Objects.hashCode(123));
    }
}