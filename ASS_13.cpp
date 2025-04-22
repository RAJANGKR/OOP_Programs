// 13. We want to calculate the total marks of each student of a class in Physics,Chemistry and
//  Mathematics and the average marks of the class. The number of students in the class are entered by the
//  user. Create a class named Marks with data members for roll number, name and marks. Create three
//  other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used
//  to define marks in individual subject of each student. Roll number of each student will be generated
//  automatically.13. We want to calculate the total marks of each student of a class in Physics,Chemistry and
//  Mathematics and the average marks of the class. The number of students in the class are entered by the
//  user. Create a class named Marks with data members for roll number, name and marks. Create three
//  other classes inheriting the Marks class, namely Physics, Chemistry and Mathematics, which are used
//  to define marks in individual subject of each student. Roll number of each student will be generated
//  automatically.

#include <iostream>
#include <string>
using namespace std;

int rollCounter = 1; //Ye global variable he

class Marks {
private:
    int rollNo;
    string name;

public:
    void BasicInformation() {
        rollNo = rollCounter++;
        cout << "Enter name: ";
        cin >> name;
    }

    void showsTheBasicInformation() {
        cout << "Roll No: " << rollNo <<endl;
        cout<<" Name: " << name << endl;
    }
};

class Physics : public Marks {
public:
    int physics;

    void PhysicsKeMarks() {
        cout << "Enter Physics marks: ";
        cin >> physics;
    }

    int getPhysics() { 
        return physics; 
    }
};

class Chemistry : public Marks {
public:
int chemistry;

    void ChemistryKeMarks() {
        cout << "Enter Chemistry marks: ";
        cin >> chemistry;
    }

    int getChemistry() {
         return chemistry;
         }
};

class Mathematics : public Marks {
public:
int math;

    void MathKeMarks() {
        cout << "Enter Mathematics marks: ";
        cin >> math;
    }

    int getMath() {
         return math; 
        }
};

int main() {
    Physics p;
    Chemistry c;
    Mathematics m;

    p.BasicInformation();
    p.PhysicsKeMarks();
    c.ChemistryKeMarks();
    m.MathKeMarks();


    p.showsTheBasicInformation();
    cout << "Physics: " << p.getPhysics() <<endl; 
    cout<<" Chemistry: " << c.getChemistry() <<endl;
    cout<<" Mathematics: " << m.getMath() << endl;

    int total;
    total = p.getPhysics() + c.getChemistry() + m.getMath();
    cout << "Total: " << total << endl;
    
    //For average marks scored!!
    float average;
    average = total / 3.0;
    cout<<" Average: " << average << endl;

    return 0;
}
