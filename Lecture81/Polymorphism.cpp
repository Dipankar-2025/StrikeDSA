#include<iostream>

using namespace std;

// Run-time polymorphism

// Abstract class
class Animal {
    public:
   virtual void run() {
        cout << " running" << endl;
    }
};

class Duck : public Animal {
    public:
    void run() {
        cout <<" Running like a duck " << endl;
    }
};

class Dog : public Animal {
    public:
    void run() {
        cout <<" Running like a dog " << endl;
    }
};

class Human : public Animal {
    public:
    void run() {
        cout <<" Running like a human on 2 legs " << endl;
    }
};

int main() {
    
    Animal *animal = new Dog();

    // string userInput;
    // cin >> userInput;

    // if(userInput == "duck") {
    //     animal = new Duck();
    // }
    // else if(userInput == "dog") {
    //     animal = new Dog();
    // }
    // else if(userInput == "human") {
    //     animal = new Human();
    // }
    // else {
    //     cout << "Invalud Input"<< endl;
    // }

    animal->run();

    return 0;
}