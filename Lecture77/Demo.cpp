#include<iostream>

using namespace std;

// class and object

class Student {

    public:
        string name;
        int age;
        int rollNumber;
        string college;

        Student(string n, int a, int rn, string c) { // parametraized constructor
            name = n;
            age = a;
            rollNumber = rn;
            college = c;
        }

        Student() { // default constructor
            // empty body
        }

        // behaviouds of an object --> functions --> methods

        void markAttendance() {
            cout << name << " is present" << endl;
        }

        void print() {
            cout << name << " " << age << " " 
            << rollNumber << " " << college << endl;
        }
};

class Calculator {

    int x, y;

    int add() {
        return 0;
    }

    int subtraction() {
        return 0;
    }
};

int main() {

    // stack
    Student s1("Aditya", 28, 101, "IIT G");
    
    // s1.name = "Aditya";
    // s1.age = 28;
    // s1.rollNumber = 101;
    // s1.college = "IIT Guwahati";

    s1.print();

    s1.markAttendance();

    // Heap
    Student *s2 = new Student("Rohit", 26, 102, "IIT G");

    // cout << (*s2).name << " " << (*s2).age << " " 
    // <<(*s2).rollNumber << " "  << (*s2).college << endl;

    cout << s2->name << " " << s2->age << " " 
    <<s2->rollNumber << " "  << s2->college << endl;

    return 0;
}