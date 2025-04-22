#include<iostream>
using namespace std;

class Mammals {
public:
    void ShowMammals() {
        cout << "I am a Mammal!!\n" << endl;
    }
};

class MarineAnimals {
public:
    void ShowMarine() {
        cout << "I am a Marine Animal!!\n" << endl;
    }
};

class BlueWhale : public Mammals, public MarineAnimals {
public:
    void ShowBlueWhale() {
        cout << "I belong to both the categories, Mammals as well as Marine Animals\n" << endl;
    }
};

int main() {
    Mammals m;
    MarineAnimals ma;
    BlueWhale b;

    cout << "1. Function of Mammals:" << endl;
    m.ShowMammals();

    cout << "2. Function of MarineAnimals:" << endl;
    ma.ShowMarine();

    cout << "3. Function of BlueWhale:" << endl;
    b.ShowBlueWhale();

    cout << "4. Functions of both parent classes :" << endl;
    b.ShowMammals();
    b.ShowMarine();

    return 0;
}