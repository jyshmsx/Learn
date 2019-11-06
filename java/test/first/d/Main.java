package inclass.test.first.d;

/**
 * Main
 */
public class Main {

    public static void main(String[] args) {
        WalkupTicket wt = new WalkupTicket("wt0001");
        AdvanceTicket at = new AdvanceTicket("at0001", 15);
        AdvanceTicket ats = new AdvanceTicket("at0002", 5);
        StudentAdvanceTicket sat = new StudentAdvanceTicket("sat0001", 15);
        StudentAdvanceTicket sats = new StudentAdvanceTicket("sat0002", 5);
        wt.print();
        at.print();
        ats.print();
        sat.print();
        sats.print();
    }
}