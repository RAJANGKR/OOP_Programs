// 8. Cinema
//  A program to deal with the day-to-day administration of bookings for a Cinema for a single day. Each
//  day there are three separate performances. An early afternoon performance at 1pm, an early evening
//  performance at 5pm, and the main performance at 8.30pm. The program should be able to handle the
//  booking of cinema seats for any of these three performances and supply details about the remaining
//  seats for a particular performance....


#include <iostream>
#include <string>
using namespace std;

class Performance {
    public:
    string time;
    int totalSeats; 
    int bookedSeats;

    Performance(string t, int seats) {
        time = t;
        totalSeats = seats;
        bookedSeats = 0;
    }

    void bookSeat() {
        if (bookedSeats < totalSeats) {

            bookedSeats++;
            cout << "Seat booked successfully for " << time << endl;

        } else {

            cout << "No seats available for " << time << endl;
        }
    }

    void inquireSeats() const {
        int availableSeats = totalSeats - bookedSeats;
        cout << "For the " << time << endl;
        cout<<"  available seats: " << availableSeats << endl;
    }
};

int main() {
    Performance p1("1:00 PM", 80); 
    Performance p2("3:00 PM", 80); 
    Performance p3("5:30 PM", 80); 

    p1.bookSeat();
    p2.bookSeat();
    p3.bookSeat();

    p1.inquireSeats();
    p2.inquireSeats();
    p3.inquireSeats();

    return 0;
}
