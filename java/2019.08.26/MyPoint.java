public class MyPoint{
    private double x = 0, y = 0;
    public double getX()
    {
        return x;
    }
    public double getY()
    {
        return y;
    }
    public void set(double a, double b)
    {
        x = a;
        y = b;
    }
    
    public void setZ()
    {
        x = 0;
        y = 0;
    }
    public double distance(MyPoint obj)
    {
        double dt = 0;
        dt = Math.sqrt(Math.pow(obj.getX() - x, 2) +  Math.pow(obj.getY() - y, 2));
        return dt;
    }
    public double distance(Double a, Double b)
    {
        double dt = 0;
        dt = Math.sqrt(Math.pow(a - x ,2) +  Math.pow(b - y, 2));
        return dt;
    }
    public MyPoint()
    {
        x = 0;
        y = 0;
    }
    public static void main(String[] args) {
        System.out.println("hellow java");
    }
}