// 17. Write a program to implement bank functionality in the above scenario. Note: Create few classes
// namely Customer, Account, RBI (Base Class) and few derived classes (SBI, ICICI, PNB etc). Assume
// and implement required member variables and functions in each class.


#include <iostream>
#include <string>
using namespace std;

class RBI {
public:
    float minimum_interest_rateOfBank;
    float maxLimitForWithdrawal;
    float minBalance_Required;


    RBI() {
        minimum_interest_rateOfBank = 4;
        maxLimitForWithdrawal = 100000;
        minBalance_Required = 10000;
    }

    float getMinInterestfromRBI() { 
        return minimum_interest_rateOfBank;
    
        }
    float getMaxWithdrawfromRBI() {
         return maxLimitForWithdrawal; 
        }

    float getMinBalancefromRBI() { 
        return minBalance_Required; 
        }

};

class Customer {
public:
    string name,address,phone;
    Customer() {
        name = "";
        address = "";
        phone = "";
        }

    Customer(string n, string a, string p) {
        name = n;
        address = a;
        phone = p;
        }

    void showCustomerDetails() {

        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Phone: " << phone << endl;

        }
};

class Account {
public:
    string accNo;
    Customer customerrr;
    float balance;

    Account() {
        accNo = "";  //string ese initialize karte heeeeee!!
        balance = 0;
    }

    Account(string no, Customer c, float bal) {
        accNo = no;
        customerrr = c;
        balance = bal;
    }

    void deposit(float amount) {
        cout << "Deposited:  " << amount << endl;
        cout<<" New Balance:  " << balance << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {

        cout << "Withdrawn:  " << amount <<endl;
        cout<< "Remaining Balance: " << balance << endl;

        } else {

            cout << "Not enough balance!" << endl;
        }
    }

    float getBalance() {
         return balance; 
        }
    string getAccountNumber() {
         return accNo;
         }
    void showCustomerDetails() { 
        customerrr.showCustomerDetails();
    }
};

class SBI : public RBI {
    public:
    Account acc;

    SBI() {
        minimum_interest_rateOfBank = 4.5; 
    }

    void openAccount(Customer c, float bal) {
        acc = Account("SBI001", c, bal);
    }

    void showDetails() {
        cout << " SBI Bank Account" << endl;
        acc.showCustomerDetails();
        cout << "Account No: " << acc.getAccountNumber() << endl;
        cout << "Balance: Rs. " << acc.getBalance() << endl;
    }

    Account& getAccount() { return acc; }
};

class ICICI : public RBI {
    public:
    Account acc;

    ICICI() {
        minimum_interest_rateOfBank = 5.0; 
    }

    void openAccount(Customer c, float bal) {
        acc = Account("ICICI001", c, bal);
    }

    void showDetails() {
        cout << " ICICI Bank Account " << endl;
        acc.showCustomerDetails();
        cout << "Account No: " << acc.getAccountNumber() << endl;
        cout << "Balance: Rs. " << acc.getBalance() << endl;
    }

    Account& getAccount() { 
        return acc;
     }
};

int main() {
    Customer user("Rajan", "PUNE", "9359xxxxxx");

    SBI s;
    ICICI i;

    s.openAccount(user, 5000);
    i.openAccount(user, 10000);

    s.getAccount().deposit(2000);
    s.getAccount().withdraw(1000);

    i.getAccount().deposit(3000);
    i.getAccount().withdraw(500);

    s.showDetails();
    i.showDetails();

    return 0;
}
