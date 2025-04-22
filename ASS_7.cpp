// 7. The SimpleCircle class
//  1. Write a SimpleCircle class declaration (only) with one member variable: itsRadius. Include a
//  default constructor, a destructor, and accessor methods for radius.
//  2. Using the class you created in Exercise 1, write the implementation of the default constructor,
//  initializing itsRadius with the value 5.
//  3. Using the same class, add a second constructor that takes a value as its parameter and assigns that
//  value to itsRadius.
//  4. Create a prefix and postfix increment operator for your SimpleCircle class that increments
//  itsRadius.
//  5. Provide a copy constructor for SimpleCircle.
//  6. Provide an assignment operator for SimpleCircle.
//  7. Write a program that creates two SimpleCircle objects. Use the default constructor on one and
//  instantiate the other with the value 9. Call the increment operator on each and then print their values.
//  Finally, assign the second to the first and print its values.


#include <iostream>
using namespace std;

class Book {
    public:
    int classMark;
    int status;

    Book(int mark) {
        classMark = mark;
        status = 0;
    }

    void checkOut() {
        if (status == 0) {

            status = 1;
            cout << "Book checked out.";

        } else {

            cout << "Book not available for checkout.";
        }
    }

    void reserve() {

        if (status == 1) {
            status = 2;

            cout << "Book reserved.";

        } else {

            cout << "Book cannot be reserved.";
        }
    }

    void inquire() {
        if (status == 0)
         cout << "Status: Available";

        else if (status == 1) 
        cout << "Status: On Loan";

        else 
        cout << "Status: Reserved";
    }
};

int main() {
    Book b1(101), b2(102), b3(103);

    b1.checkOut();
    b1.reserve();
    b2.checkOut();

    cout << "\nBook 1: "; b1.inquire();
    cout << "Book 2: "; b2.inquire();
    cout << "Book 3: "; b3.inquire();


    int onLoan = 0, reserved = 0, available = 0;


    if (b1.status == 1) onLoan++;
    else if (b1.status == 2) reserved++;
    else available++;

    if (b2.status == 1) onLoan++;
    else if (b2.status == 2) reserved++;
    else available++;

    if (b3.status == 1) onLoan++;
    else if (b3.status == 2) reserved++;
    else available++;


    cout << "Books in library: 3";
    cout << "Books on loan: " << onLoan << endl;
    cout << "Books reserved: " << reserved << endl;
    cout << "Books on shelves: " << available << endl;

    return 0;
}

