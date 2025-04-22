// 12. Make a class named Fruit with a data member to calculate the number of fruits in a basket. Create
//  two other class named Apples and Mangoes to calculate the number of apples and mangoes in the
//  basket. Print the number of fruits of each type and the total number of fruits in the basket.

#include <iostream>
using namespace std;

class Fruit {
public:
    int totalFruits = 0;
    
};

class Apple : public Fruit {
public:
    int TotalApple;
    void apple(int AppleCount) {
        TotalApple = AppleCount;

        cout << "Number of apples: " <<endl;
        cout<<TotalApple << endl;

}
};

class Mango : public Fruit {
public:
    int TotalMango;
    void mango(int count) {
        TotalMango = count;
        
        cout << "Number of mangoes: " <<endl;
        cout<<TotalMango << endl;

}
};

int main() {
    Apple a;    
    Mango m;
    a.apple(5);
    m.mango(10);   
   
    int total = a.TotalApple + m.TotalMango;
    cout << "Total number of fruits: " << total << endl;

    return 0;
}
