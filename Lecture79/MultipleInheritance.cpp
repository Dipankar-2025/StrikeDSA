#include<iostream>

using namespace std;

class Teacher {
    public:

    void teach() {
        cout << "Teacher is teaching" << endl;
    }
};

class Researcher {
    public:

    void research() {
        cout << "Researcher is researching" << endl;
    }
};

class Professor : public Teacher, public Researcher {
    public:
    void conductExam() {
        cout << "Professor is conducting exam" << endl;
    }
};

int main() {

    Professor *p1 = new Professor();
    p1->teach();
    p1->research();
    p1->conductExam();

    return 0;
}