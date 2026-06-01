#include<iostream>

using namespace std;

class Student {
    public:
    string name;
    int age;

    void markAttedance() {
        cout << name << " is present" << endl;
    }
};

class EngineeringStudent : public Student {
    public:

    void attendLab() {
        cout << "Lab attended by " << name << endl;
    }
};

int main() {

    EngineeringStudent *es1 = new EngineeringStudent();

    es1->name = "Aditya";
    es1->age = 28;
   
    es1->markAttedance();
    es1->attendLab();

    return 0;
}