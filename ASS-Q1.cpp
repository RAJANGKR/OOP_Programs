// 1. Assume that a bank maintains two kinds of accounts for customers, one called as savings and the
//  other as current account. The savings account provides compound interest and withdrawal facilities
//  but no chequebook facility. The current account provides cheque book facility but no interest. Current
//  account holders should also maintain a minimum balance and if the balance falls below this level a
//  service charge is imposed. Create a class account that stores customer name, account number and type
//  of account. From this derive the classes cur_acct and sav_acct to make them more specific to their
//  requirements. Include necessary member functions in order to achieve the following tasks:
//  (a) Accept the deposit from a customer and update the balance.
//  (b) Display the balance.
//  (c) Compute and deposit interest.
//  (d) Permit withdrawal and update the balance.
//  (e) Check for the minimum balance, impose penalty, necessary and update the balance.
//  Do not use any constructors. Use member functions to initialize class members
 
 
#include <iostream>
using namespace std;

class Account {
private:
    char name[20];
    int AccNo;
    char AccType[20];

public:
    float balance;

    void Entry() {
        cout << "Enter customer name: "<<endl;
        cin >> name;
        cout << "Enter account number: "<<endl;
        cin >> AccNo;
        
        cout << "Enter initial balance: "<<endl;
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
        cout << "Current balance: " << balance <<"Rs!"<< endl;
    }
};

class SavingAccount : public Account {
public:
    void Interest() {
        float rate;
        int time;
        float interest;
        cout << "Enter interest rate: ";
        cin >> rate;
        cout << "Enter time (in years): ";
        cin >> time;
        //I have used this formula to calculculate the intrets!
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
        } 
        else {
            cout << "Low balance!\n";
        }
    }
};

class CurrentAccount : public Account {
public:
    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal is done!"<<endl;

        } else {
            cout << "Not enough balance!"<<endl;
            void checkMinimumBalance();
        }
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
    cout << "Enter account type:\n1.Saving\n2.Current\n"<<endl<<"Select any one !!"<<endl;
    cin >> AccType;

    if(AccType == 1){
    cout <<" SAVING ACCOUNT !!"<<endl;

    SA.Entry();
    SA.deposit();
    SA.Interest();
    SA.withdraw();
    SA.displayBalance();
    
    }

    else if(AccType ==2){

    cout << " CURRENT ACCOUNT !!"<<endl;

    CA.Entry();
    CA.deposit();
    CA.displayBalance();
    CA.withdraw();
    CA.displayBalance();
    CA.checkMinimumBalance();
    CA.displayBalance();

    }
    
    else{
        cout<<"Invalid Choice"<<endl;
    }
    return 0;
}
