package inclass.task.third;

class Student  implements Cloneable{
    private int id;
    private int age;
    private String name;
    
    public Student()
    {
        this.id = 0;
        this.age = 0;
        this.name = "";
    }
    public Student(int i, String n ,int a)
    {
        this.id = i;
        this.age = a;
        this.name = n;
    }
    public void set(int i, String n, int a)
    {
        this.id = i;
        this.age = a; 
        this.name = n;
    }
    public int getId()
    {
        return this.id;
    }
    public int getAge()
    {
        return this.age;
    }
    public String getName()
    {
        return this.name;
    }
    public String toString()
    {
        return "姓名: " + this.name + " 学号: " + this.id + " 年龄: " + this.age;
    }
    public boolean equals(Object obj)
    {
        if(obj instanceof Student)
        {
            Student e = (Student) obj;
            boolean re = e.id == this.id && this.name.equals(e.name) && e.age == this.age;
            return re;
        }
        else
            return false;
    }
	//clone()方法，
    public Object clone()
    {
        Student cl = new Student(this.id, this.name, this.age);
        try{
            cl = (Student)super.clone();
        }catch(CloneNotSupportedException e)
        {
            e.printStackTrace();
        }
        return cl;
    }
    
}