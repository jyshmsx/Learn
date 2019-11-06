package inclass.test.first.d;

public class StudentAdvanceTicket extends AdvanceTicket{
    public StudentAdvanceTicket(String ticketID, int advanceDays)
    {
        super(ticketID, advanceDays);
        this.ticketPrice = this.ticketPrice / 2;
    }

    public void print()
    {
        System.out.println("\"Nuber: " + this.ticketID + ", Price: " + this.ticketPrice + "(ID required)\"");
    }
    
}