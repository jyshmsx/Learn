public class MyPointTest{
    public static void main(String[] args) {
        MyPoint a = new MyPoint();
        MyPoint b = new MyPoint();
        b.set(10,30.5);
        System.out.println(a.distance(b));
        System.out.println(b.distance(0.0d, 0.0d));
    }
}
