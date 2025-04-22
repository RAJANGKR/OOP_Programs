// 20. Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some more
//  amount to it. Create a class 'AddAmount' with a data member named 'amount' with an initial value of
//  $50. Now make two constructors of this class as follows:
//  1- without any parameter- no amount will be added to the Piggie Bank
//  2- having a parameter which is the amount that will be added to the Piggie Bank
//  Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank....


#include <iostream>
using namespace std;

class AddAmount {
public:

    int amount;


    AddAmount() {
        amount = 50;
    }   


    AddAmount(int add) {

        amount = 50 + add;
        }


    void showAmount() {

        cout << "Total amount in Piggie Bank: $" << amount << endl;
        }
};

int main() {
    AddAmount p1;
    p1.showAmount();  

    AddAmount p2(150);
    p2.showAmount(); 

    return 0;
}
