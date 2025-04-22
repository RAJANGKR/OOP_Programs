// An educational institution wishes to maintain a database of its employees. The database is divided into
//  several classes whose hierarchical relationships are shown in following figure. The figure also shows
//  the minimum information required for each class. Specify all classes and define functions to create the
//  database and retrieve individual details as and when needed

#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int empID;

public:
    void Details() {
        cout << "Enter name: "<<endl;
        cin >> name;
        cout << "Enter employee ID: "<<endl;
        cin >> empID;
    }

    void showingDetails() {
        cout << "Name: " << name <<endl<< "Employee ID: " << empID << endl;
    }
};

class Teacher : public Employee {
private:
    string subject;
    int publications;

public:
    void Details() {
        Employee::Details();

        cout << "Enter subject: ";
        cin >> subject;
    }

    void showingDetails() {
        Employee::showingDetails();
        cout << "Subject: " << subject<< endl;
    }
};

class Officer : public Employee {
public:
    char grade;
    void Details() {
        Employee::Details();
        cout << "Enter grade (A/B/C): ";
        cin >> grade;
    }

    void showingDetails() {
        Employee::showingDetails();
        cout << "Grade: " << grade << endl;
    }
};

class Typist : public Employee {
protected:
    float speed;
    string type;

public:
    void Details() {
        Employee::Details();
        cout<<"Type of Typist:";
        cin >> type;
        cout << "Enter typing speed (WPM): ";
        cin >> speed;
    }

    void showingDetails() {
        Employee::showingDetails();
        cout<<"Typist is:"<<type<<endl;
        cout << "Typing speed: " << speed << " wpm" << endl;

    }
};

int main() {
    Teacher T;
    Officer O;
    Typist TP;
    

    cout << " Enter Teacher Details \n"<<endl;
    T.Details();

    cout << " Enter Officer Details \n"<<endl;
    O.Details();

    cout << " Enter Typist Details \n"<<endl;
    TP.Details();

    

    cout << "TEACHER DETAILS ";
    T.showingDetails();

    cout << "OFFICER DETAILS ";
    O.showingDetails();

    cout << "REGULAR TYPIST DETAILS ";
    TP.showingDetails();

  
    return 0;
}
