// 10. The Employee class
// 1. Write the code that declares a class called Employee with these data members: age, yearsOfService,
// and Salary.
// 2. Rewrite the Employee class to make the data members private, and provide public accessor methods
// to get and set each of the data members.
// 3. Write a program with the Employee class that makes two Employees; sets their age,
// YearsOfService, and Salary; and prints their values.
// 4. Continuing from Exercise 3, provide a method of Employee that reports how many thousands of
// dollars the employee earns, rounded to the nearest 1,000.
// 5. Change the Employee class so that you can initialize age, YearsOfService, and Salary when you
// create the employee.

#include <iostream>
using namespace std;

class Employee {
    public:
    int age;
    int yearsOfService;
    float salary;

    void setAge(int a) { 
        age = a;

        }
    void setYearsOfService(int y) {
         yearsOfService = y;
        
        }
    void setSalary(float s) {
         salary = s;
        
        }

    int getAge() { 
        return age;
        }

    int getYearsOfService() { 
        return yearsOfService;
        }

    float getSalary() { 
        return salary; 
        }

    void display() {
        cout << "Age: " << age << endl;
        cout<<" Years of Service: " << yearsOfService<<endl;
        cout<< " Salary: $" << salary << endl;
    }
};

int main() {
    Employee e1, e2;

    e1.setAge(30);
    e1.setYearsOfService(5);
    e1.setSalary(55000);
    cout << "Employee 1:"<<endl;
    e1.display();

    e2.setAge(45);
    e2.setYearsOfService(20);
    e2.setSalary(120000);
    cout << "Employee 2:"<<endl;
    e2.display();

    return 0;
}

    