package inclass.test.first.c;

public class Main {
    public static void main(String[] args) {
        EBook ebk = new EBook("Thinking in java","", "Bruce Eckel", 100, "9780131872486", 10.00);
        EBookReader ebr = new EBookReader(ebk);
        ebr.pageTurning();
        ebr.pageTurning();
    }
}