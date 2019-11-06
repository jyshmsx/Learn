package inclass.test.first.d;

public class AdvanceTicket extends Ticket{
    public AdvanceTicket(String ticketID, int advanceDays)
    {
        super(ticketID);
        if(advanceDays >= 10)
        {
            this.ticketPrice = 30;
        }
        else if(advanceDays >= 1 && advanceDays <= 9)
        {
            this.ticketPrice = 40;
        }
    }
    
}