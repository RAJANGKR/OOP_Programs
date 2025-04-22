// 19. Create a class named 'Rectangle' with two data members- length and breadth and a function to
//  calculate the area which is 'length*breadth'. The class has three constructors which are :
//  1- having no parameter- values of both length and breadth are assigned zero.
//  2- having two numbers as parameters- the two numbers are assigned as length and breadth
//  respectively.
//  3- having one number as parameter- both length and breadth are assigned that number.
//  Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas!!

#include<iostream>
using namespace std;

class Rectangle{
private:
    int length,breadth;
public:

    Rectangle():length(0),breadth(0)//This is INitialization list
    {}

    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }

    Rectangle(int x){
        length=x;breadth=x;
    }

    void CalculatetheArea(){
        cout<<"Area of the Rectangle is:"<<length*breadth<<endl;

    }
};

int main(){
    Rectangle r;
    r.CalculatetheArea();
    r=Rectangle(10,20);
    r.CalculatetheArea();
    r=Rectangle(15);//r ek object he jisee 15 assign kiya he thodi der ke liye!!
    r.CalculatetheArea();

    return 0;

}

