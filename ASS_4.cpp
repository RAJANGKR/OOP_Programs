// 4. Hybrid Inheritance

//  Consider a class network of the following figure. The class master derives information from both
//  account and admin classes which in turn derives information from the class person. Define all the four
//  classes and write a program to create, update and display the information contained in master objects.


#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void PersonDetails() {
        cout << "Enter Name: ";
        cin>>name;
        cout << "Enter Age: ";
        cin >> age;
       
    }

    void showThePersonDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Account : virtual public Person {
public:
    int accountNumber;
    float balance;

    void AccountDetails() {
        cout << "Enter Account Number: ";
        cin>>accountNumber;

        cout << "Enter Balance: ";
        cin >> balance;
        
    }

    void showAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Admin : virtual public Person {
public:
    string designation,department;

    void AdminDetails() {
        
        cout << "Enter Department: ";
        cin>>department;
    }

    void showTheAdminDetails() {
       
        cout << "Department: " << department << endl;
    }
};

class FullPerson : public Account, public Admin {
public:
    void FullPersonDetails() {

        PersonDetails();
        AccountDetails();
        AdminDetails();
    }

    void showFullPersonDetails() {

        cout << "Full Person Details "<<endl;

        showThePersonDetails();
        showAccountDetails();
        showTheAdminDetails();
    }
};

int main() {
    FullPerson f;

    f.FullPersonDetails();
    cout<<endl;
    f.showFullPersonDetails();

    return 0;
}

