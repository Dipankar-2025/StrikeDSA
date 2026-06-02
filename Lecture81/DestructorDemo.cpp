#include<iostream>

using namespace std;

class Human {

};

class Student {

    public:

    string name;
    int age;
    int rollNumber;
    static string college;

    Human *human;

    Student() {
        cout << "Student created" << endl;
    }

    ~Student() {
        delete human;
        cout << "Student destroyed" << endl;
    }
};

int main() {

    Student *s1 = new Student();

    s1->name = "Aditya";

    cout << s1->name << endl;

    delete s1;

    return 0;
}