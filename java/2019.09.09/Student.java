package inclass.task.third;

class Student  implements Cloneable{
    private int id;
    private int year;
    private String name;
    
    public Student()
    {
        this.id = 0;
        this.year = 0;
        this.name = "";
    }
    public Student(int i, String n ,int y)
    {
        this.id = i;
        this.year = y;
        this.name = n;
    }
    public void set(int i, String n, int y)
    {
        this.id = i;
        this.year = y; 
        this.name = n;
    }
    public int getId()
    {
        return this.id;
    }
    public int getYear()
    {
        return this.year;
    }
    public String getName()
    {
        return this.name;
    }
    public String toString()
    {
        return "姓名: " + this.name + " 学号: " + this.id + " 年龄: " + this.year;
    }
    public boolean equals(Student obj)
    {
        boolean equ = obj.id == this.id && obj.name == this.name && obj.year == this.year;
        return equ;
    }
    // public Object clone()
    // {
    //     Student cl = new Student(this.id, this.name, this.year);
    //     // try{
    //     //     cl = (Student)super.clone();
    //     // }catch(CloneNotSupportedException e)
    //     // {
    //     //     e.printStackTrace();
    //     // }
    //     return cl;
    // }
    
}