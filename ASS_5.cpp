// 5. BookShop
// A bookshop maintains the inventory of books that are being sold at the shop. The list includes details
// such as author, title, price, publisher and stock position. Whenever a customer wants a book, the
// salesperson inputs the title and author and the system searches the list and displays whether it is
// available or not. If it is not, an appropriate message is displayed. If it is, then the system displays the
// book details and requests for the number of copies required. If the requested copies are available, the
// total cost of the requested copies is displayed; otherwise “Required copies not in stock” is displayed.
// Design a system using a class called books with suitable member functions and constructors. Use new
// operators in constructors to allocate the memory space required...


#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title,author,publisher;
    int price;
    int stock;

    Book(string t, string a, string pb, float p, int s) {
        title = t;
        author = a;
        publisher = pb;
        price = p;
        stock = s;
        }

    void display() {
        cout << "Title: " << title<< endl;
        cout << "Author: " << author<< endl;
        cout << "Publisher: " << publisher<< endl;
        cout << "Price: Rs. " << price<<endl;
        cout << "Stock: " << stock << endl;
        }

    bool IfItMatches(string t, string a) {
        return (t == title && a == author);
    }

    void bookUWantToBuy(int copies) {
        if (copies <= stock) {
            cout << "Total Cost: " << price * copies << endl;

            } 
        else {
            cout << "Not enough copies!!" << endl;
            }
    }
};

int main() {
    Book b1("C++ Basics", "Rajan", "PCCOE", 299, 10);

    string searchTitle, searchAuthor;
    int copies;

    cout << "Enter title of book: ";
    getline(cin, searchTitle);//To get input of sentence which uses spaces in betweem!!
    cout << "Enter author name: ";
    getline(cin, searchAuthor);

    if (b1.IfItMatches(searchTitle, searchAuthor)) {
        cout << "Book Found!";
        b1.display();

        cout << "How many copies do you want? ";
        cin >> copies;

        b1.bookUWantToBuy(copies);


    } else {

        cout << "Book Not Available." << endl;
    }

    return 0;
}
