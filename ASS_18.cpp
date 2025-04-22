// 18. Write a program to print the names of students by creating a Student class. If no name is passed
//  while creating an object of the Student class, then the name should be "Unknown", otherwise the name
//  should be equal to the String value passed while creating the object of the Student class.

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;

public:

    Student() {
        name = "Unknown";
    }

    //string studentkaName="Unknown";
    Student(string studentkaName) {
        name = studentkaName;
    }

    void displayTheNameOfStudent() {
        cout << "Student Name:" << name << endl;
    }
};

int main() {
    Student s1("Rajan");
    Student s3("Garudkar");
    Student s2;

    s1.displayTheNameOfStudent();  
    s3.displayTheNameOfStudent();  
    s2.displayTheNameOfStudent();  

    return 0;
}
