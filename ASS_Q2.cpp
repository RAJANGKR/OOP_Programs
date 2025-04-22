//2. Modify the program of exercise 1 to include constructors for all three classes.


#include <iostream>
#include <string> 
using namespace std;

class Account {
private:
    string name;       
    int AccNo;
    string AccType;    

public:
    float balance;

    Account() {
        AccNo = 0;
        balance = 0;
    }

    Account(string n, int no, string t, float bal) {
        name = n;
        AccNo = no;
        AccType = t;
        balance = bal;
    }

    void Entry() {
        cout << "Enter customer name: " << endl;
        cin >> name;
        cout << "Enter account number: " << endl;
        cin >> AccNo;
        cout << "Enter account type: " << endl;
        cin >> AccType;
        cout << "Enter initial balance: " << endl;
        cin >> balance;
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited!!\n";
    }

    void displayBalance() {
        cout << "Current balance: " << balance << " Rs!" << endl;
    }
};

class SavingAccount : public Account {
public:
    SavingAccount() : Account() {}

    SavingAccount(string n, int no, string t, float bal) : Account(n, no, t, bal) {}

    void Interest() {
        float rate;
        int time;
        float interest;
        cout << "Enter interest rate: ";
        cin >> rate;
        cout << "Enter time (in years): ";
        cin >> time;
        interest = (balance * rate * time) / 100;
        balance += interest;
        cout << "Interest added: " << interest << endl;
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        } else {
            cout << "Low balance!\n";
        }
    }
};

class CurrentAccount : public Account {
public:
    CurrentAccount() : Account() {}

    CurrentAccount(string n, int no, string t, float bal) : Account(n, no, t, bal) {}

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal is done!" << endl;
        } else {
            cout << "Not enough balance!" << endl;
        }
        checkMinimumBalance();
    }

    void checkMinimumBalance() {
        if (balance < 1000) {
            cout << "Balance is below minimum. Penalty of Rs. 100 imposed.\n";
            balance -= 100;
        }
    }
};

int main() {
    SavingAccount SA;
    CurrentAccount CA;

    int AccType;
    cout << "Enter account type:\n1. Saving\n2. Current\n" << endl
         << "Select any one !!" << endl;
    cin >> AccType;

    if (AccType == 1) {
        cout << "SAVING ACCOUNT !!" << endl;
        SA.Entry();
        SA.deposit();
        SA.Interest();
        SA.withdraw();
        SA.displayBalance();
    } else if (AccType == 2) {
        cout << "CURRENT ACCOUNT !!" << endl;
        CA.Entry();
        CA.deposit();
        CA.displayBalance();
        CA.withdraw();
        CA.displayBalance();
    } else {
        cout << "Invalid Choice" << endl;
    }

    return 0;
}
