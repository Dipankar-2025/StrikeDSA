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

class MedicalStudent : public Student {
    public:

    void performOperation() {
        cout << name << " is performing operation" << endl;
    }
    
};

int main() {

    EngineeringStudent *es1 = new EngineeringStudent();
    es1->name = "Aditya";
    es1->age = 28;
   
    es1->markAttedance();
    es1->attendLab();

    MedicalStudent *ms1 = new MedicalStudent();
    ms1->name = "Rohan";
    ms1->age = 25;

    ms1->markAttedance();
    ms1->performOperation();

    return 0;
}