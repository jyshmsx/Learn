package inclass.test.first.d;

public abstract class Ticket {
    String ticketID;
    int ticketPrice;
    Ticket(String ticketID)
    {
        this.ticketID = ticketID;
    }
    public int searchPric()
    {
        System.out.println("此门票价格为" + this.ticketPrice);
        return this.ticketPrice;
    }
    public void print()
    {
        System.out.println("\"Nuber: " + this.ticketID + ", Price: " + this.ticketPrice + "\"");
    }
}