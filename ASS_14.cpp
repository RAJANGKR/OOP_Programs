// 14. We want to store the information of different vehicles. Create a class named Vehicle with two data
//  member named mileage and price. Create its two subclasses
//  *Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type
//  (diesel or petrol).
//  *Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or
//  oil), wheel type(alloys or spokes) and fuel tank size(in inches)
//  Make another two subclasses Audi and Ford of Car, each having a data member to store the model
//  type. Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type.
//  Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost,
//  warranty, seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a TVS bike.

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    float mileage;
    float price;

    void vehicleInformation() {
        cout << "Enter mileage (in km/l): ";
        cin >> mileage;
        cout << "Enter price (in Rs): ";
        cin >> price;
    }

    void showVehicleInformation() {
        cout << "Mileage: " << mileage << " km/l" << endl;
        cout << "Price: Rs " << price << endl;
    }
};

class Car : public Vehicle {
public:
    float ownershipCost;
    int warranty;
    int seatingCapacity;
    string fuelType;

    void CarInformation() {
        Vehicle::vehicleInformation(); 

        cout << "Enter ownership cost: ";
        cin >> ownershipCost;
        cout << "Enter warranty (in years): ";
        cin >> warranty;
        cout << "Enter seating capacity: ";
        cin >> seatingCapacity;
        cout << "Enter fuel type (Petrol/Diesel): ";
        cin >> fuelType;
    }

    void showCarInfo() {
        Vehicle::showVehicleInformation();  
        cout << "Ownership Cost: Rs " << ownershipCost << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Seating Capacity: " << seatingCapacity << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }
};

class Audi : public Car {
public:
    string modelType;

    void AudiInformation() {
        cout << "Enter Audi model type: ";
        cin >> modelType;
        CarInformation(); 
    }

    void showAudiInfo() {
        cout << " Audi Car Information ";
        cout << "Model Type: " << modelType << endl;
        showCarInfo();
    }
};

class Ford : public Car {
public:
    string modelType;

    void getFordInfo() {
        cout << "Enter Ford model type: ";
        cin >> modelType;
        CarInformation(); 
    }

    void showFordInfo() {
        cout << " Ford Car Information ";
        cout << "Model Type: " << modelType << endl;
        showCarInfo();
    }
};

class Bike : public Vehicle {
public:
    int cylinders;
    int gears;
    string coolingType;
    string wheelType;
    float fuelTankSize;

    void getBikeInfo() {
        vehicleInformation();  
        cout << "Enter number of cylinders: ";
        cin >> cylinders;
        cout << "Enter number of gears: ";
        cin >> gears;
        cout << "Enter cooling type (Air/Liquid/Oil): ";
        cin >> coolingType;
        cout << "Enter wheel type (Alloys/Spokes): ";
        cin >> wheelType;
        cout << "Enter fuel tank size (in inches): ";
        cin >> fuelTankSize;
    }

    void showBikeInfo() {
        showVehicleInformation();  
        cout << "Cylinders: " << cylinders << endl;
        cout << "Gears: " << gears << endl;
        cout << "Cooling Type: " << coolingType << endl;
        cout << "Wheel Type: " << wheelType << endl;
        cout << "Fuel Tank Size: " << fuelTankSize << " inches" << endl;
    }
};

class Bajaj : public Bike {
public:
    string makeType;

    void getBajajInfo() {
        cout << "Enter Bajaj make type: ";
        cin >> makeType;
        getBikeInfo();
    }

    void showBajajInfo() {
        cout << "Bajaj Bike Information ";
        cout << "Make Type: " << makeType << endl;
        showBikeInfo();
    }
};

class TVS : public Bike {
public:
    string makeType;

    void getTVSInfo() {
        cout << "Enter TVS make type: ";
        cin >> makeType;
        getBikeInfo();
    }

    void showTVSInfo() {
        cout << "TVS "<<endl;
        cout << "Make Type: " << makeType << endl;
        showBikeInfo();
    }
};

int main() {
    Audi a;
    Ford f;
    Bajaj b;
    TVS t;

    
    a.AudiInformation();
    f.getFordInfo();
    b.getBajajInfo();
    t.getTVSInfo();

    a.showAudiInfo();
    f.showFordInfo();
    b.showBajajInfo();
    t.showTVSInfo();

    return 0;
}
    