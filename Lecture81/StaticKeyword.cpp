#include<iostream>

using namespace std;

// static keyword

class Student {

    public:

    string name;
    int age;
    int rollNumber;
    static string college;
};

// Initializing outside the class
string Student::college;

int main() {

    Student *s1 = new Student();
    s1->name = "Aditya";
    s1->age = 28;
    s1->rollNumber = 101;
    s1->college = "IIT G";

    //Student::college = "IIT B";

    cout << s1->name << "  " << s1->age <<"  " 
    << s1->rollNumber << "  " << s1->college << endl;

    Student *s2 = new Student();
    s2->name = "Rohit";
    s2->age = 27;
    s2->rollNumber = 102;

    cout << s2->name << "  " << s2->age <<"  " 
    << s2->rollNumber << "  " << s2->college << endl;


    return 0;
}