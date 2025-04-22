// 16. All the banks operating in India are controlled by RBIBank. RBIBank has set a well defined guideline (e.g.
//     minimum interest rate, minimum balance allowed, maximum withdrawal limit etc) which all banks
//     must follow. For example, suppose RBIBank has set minimum interest rate applicable to a saving bank
//     account to be 4% annually; however, banks are free to use 4% interest rate or to set any rates above it
    
    
#include <iostream>
#include <string>
using namespace std;


class RBIBank {
public:
    double minimum_interest_rateOfBank;
    double minBalance_Required;
    double maxLimitForWithdrawal;

    RBIBank() {

        minimum_interest_rateOfBank = 4;  
        minBalance_Required = 1000;    
        maxLimitForWithdrawal = 50000;  

        }

    void displayGuidelines() {

        cout << "RBIBank Guidelines:" << endl;
        cout << "Minimum Interest Rate: " << minimum_interest_rateOfBank << "%" << endl;
        cout << "Minimum Balance Required:  " << minBalance_Required << endl;
        cout << "Maximum Withdrawal Limit: " << maxLimitForWithdrawal << endl;

        }
};

class Bank : public RBIBank {
public:
    string bank_ka_name;
    double interestRate;

    Bank(string name, double rate) {

        bank_ka_name = name;
        if (rate >= minimum_interest_rateOfBank) {

            interestRate = rate;

        } else {

            interestRate = minimum_interest_rateOfBank;
            }
                
    }

    void displayBankDetails() {

        cout << "Name of the Bank: " << bank_ka_name << endl;
        cout << " Interest Rate of Bank: " << interestRate << "%" << endl;
        cout << "Minimum Balance Required:  " << minBalance_Required << endl;
        cout << "Maximum Withdrawal Limit:  " << maxLimitForWithdrawal << endl;
        cout<<endl;

        }
};

int main() {
    RBIBank rbi;
    cout << "RBI Bank ke Banking Guidelines:" << endl;
    rbi.displayGuidelines();

    Bank b1("SBI", 4.5);//ye constructor implicitly call hua he......eg:ye khud se call hua tha hamne
    //sirf usme value pass kiya heee!!

    Bank b2("HDFC", 3.5); 

    Bank b3("ICICI", 5.0);

    cout << "Bank Details:" << endl;
    b1.displayBankDetails();
    b2.displayBankDetails();
    b3.displayBankDetails();

    b3=Bank("RAJAN",2.0);//this is explicitly called i.e hamne call kiya he
    b3.displayBankDetails();


    return 0;
}