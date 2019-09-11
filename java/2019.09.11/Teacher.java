package inclass.task.fourth;

public class Teacher {
    private int id;
    private String name;
    private int age;

    public Teacher() {
        // super.clone();
        this.id = 0;
        this.age = 0;
        this.name = "";
    }

    public Teacher(int i, String n, int a) {
        this.id = i;
        this.age = a;
        this.name = n;
    }

    public void set(int i, String n, int a) {
        this.id = i;
        this.age = a;
        this.name = n;
    }

    public int getId() {
        return this.id;
    }

    public int getAge() {
        return this.age;
    }

    public String getName() {
        return this.name;
    }

    public String toString() {
        return "教师: 姓名: " + this.name + " ID: " + this.id + " 年龄: " + this.age;
    }

    public boolean equals(Object obj) {
        if (obj instanceof Teacher) {
            Teacher e = (Teacher) obj;
            boolean re = e.id == this.id && this.name.equals(e.name) && e.age == this.age;
            return re;
        } else
            return false;
    }


    

}