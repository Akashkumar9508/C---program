#include <iostream>
using namespace std;
class Vehicle {
public:
    Vehicle() {
        cout << "Vehicle constructor" << endl;
    }
    void drive() {
        cout << "Driving a vehicle" << endl;
    }
};
class Car : public Vehicle {
public:
    Car() {
        cout << "Car constructor" << endl;
    }
    void drive() {
        cout << "Driving a car" << endl;
    }
};
class Boat {
public:
    Boat() {
        cout << "Boat constructor" << endl;
    }
    void sail() {
        cout << "Sailing a boat" << endl;
    }
};
class AmphibiousCar : public Car, public Boat {
public:
    AmphibiousCar() {
        cout << "AmphibiousCar constructor" << endl;
    }
};
int main() {
    AmphibiousCar myCar;
     myCar.drive();  
     myCar.sail();  
    return 0;
}
