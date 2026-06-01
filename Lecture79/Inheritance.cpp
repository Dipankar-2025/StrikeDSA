#include<iostream>

using namespace std;

class Student {
    protected:
    string name;
    int age;
    int rollNumber;
    string college;

    public:
    Student() {}
    
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void markAttedance() {
        cout << name << " is present" << endl;
    }
};

// EngineeringStudent "is-a" Student

class EngineeeringStudent : public Student {

    public:
    EngineeeringStudent(string n, int a) {
        name = n;
        age = a;
    }

    void fun() {
        cout << name << " " << age << endl;
    }
};

// DRY -> Do Not Repeat Yourself


int main() {

    Student *s1 = new Student("Aditya", 28);

    EngineeeringStudent *e1 = new EngineeeringStudent("Aditya", 28);

    e1->fun();

    return 0;
}