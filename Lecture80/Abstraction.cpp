#include<iostream>

using namespace std;

class Car {
    public:
    
    virtual void drive() = 0;

    void startEngine() {
        cout << "Engine started" << endl;
    }
};

class PetrolCar : public Car {
    public:
    void drive() { // HOW can i do it ..??
        cout << " Driving petrol car" << endl;
    }
};

class ElectricCar : public Car {
    public:
    void drive(){  // HOW can i do it ..??
        cout << " Driving Electric car" << endl;
    }
};

int main() {

    // Car *c = new Car();

    Car *c = new ElectricCar();

    c->startEngine();

    c->drive(); // WHAT i want to do ??

    return 0;
}