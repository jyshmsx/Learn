package inclass.experiment.third;

public class Company extends Staff{
    protected String CName;
    protected int staffCount;
    protected int allSalaryOneMonth;
    protected Staff [] staff;

    public Company(String CName, int staffCount)
    {
        super("Company", CName);
        this.CName = CName;
        this.staffCount = staffCount;
        this.staff = new Staff [this.staffCount];
        this.allSalaryOneMonth = 0;
    }

    public void setCommonStaff(String position, String SName, int SSalary, int staffC)
    {
        this.staff[staffC] = new Staff(position, SName);
        this.staff[staffC].setDaySalary(SSalary);
    }

    public int getStaffCheckIn(int staffC)
    {
        return this.staff[staffC].getCheckIn();
    }

    public void setStaffCheckIn(int staffC,int checkIn)
    {
        this.staff[staffC].setCheckIn(checkIn);
    }

    public int getStaffCount()
    {
        return this.staffCount;
    }

    public int getAllSalaryOneMonth()
    {
        this.allSalaryOneMonth = 0;
        for(Staff st : this.staff)
        {
            this.allSalaryOneMonth += st.getMonthSalary();
        }
        return this.allSalaryOneMonth;
    }

    public String toString()
    {
        return "company: " + CName + " allSalaryOneMonth " + this.getAllSalaryOneMonth();
    }
}   