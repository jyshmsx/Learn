package inclass.experiment.third;

public class Staff implements Salary {
    protected String position;
    protected String SName;
    protected int daySalary;
    protected int checkInMonth;

    public Staff(String position, String SName) {
        this.position = position;
        this.SName = SName;
        this.checkInMonth = 0;
    }

    public void setDaySalary(int salary) {
        this.daySalary = salary;
    }

    public int getDaySalary() {
        return this.daySalary;
    }

    public int getMonthSalary() {
        return this.checkInMonth * this.daySalary;
    }

    public void checkIN() {
        this.checkInMonth++;
    }

    public void settlementSalary() {
        System.out.println(this.SName + "此月的工资为：" + this.getMonthSalary());
        this.checkInMonth = 0;
    }

    protected int getCheckIn() {
        return this.checkInMonth;
    }

    protected void setCheckIn(int checkIn) {
        this.checkInMonth = checkIn;
    }

    public String toString() {
        return "positon: " + this.position + " name: " + this.SName + " monthSalary " + this.getMonthSalary()
                + " checkInSituation: " + this.checkInMonth;
    }
}