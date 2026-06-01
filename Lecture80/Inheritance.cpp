#include<iostream>

using namespace std;

class Base {
    public:
    void show() {
        cout << "Showing base class" << endl;
    }
};

class A : public Base {
    // empty
};

class B : public Base {
    // empty
};

class C : public A, public B {
    // empty class
};

int main() {
     
    C *c = new C();
    //c->show();

    c->A::show(); // :: = scope resolution operator

    return 0;
}