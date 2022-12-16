
class BookCreatSeat
{
    int total_seats = 10;
    void bookseat(int seats)
    {
        if(total_seats >= seats)
        {
            System.out.println("Seat synchronization ");
            total_seats = total_seats-seats;
            System.out.println("seats left "+ total_seats);
        }
        else
        {
            System.out.println("Seat cannot be booked ");
            System.out.println("Seat left"+ total_seats);

        }
    }
}
public class synchronizationA extends  Thread
{
    static BookCreatSeat b;
    int seats;
    public void run()
    {
        b.bookseat(seats);
    }
    public static void main(String[] args) {
        b = new BookCreatSeat();
        synchronizationA SA = new synchronizationA();
        SA.seats = 7;
        SA.start();

        synchronizationA AA = new synchronizationA();
        AA.seats = 6;
        AA.start();
        

    }
}
