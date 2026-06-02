#include<iostream>

using namespace std;

// compile time polymorphism

class Calculator {
    public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return add(a, b) + c;
    }
    
    int add(int a, int b, int c, int d) {
        return add(a,b,c) + d;
    }
};

int main() {

    Calculator *c1 = new Calculator();

    int sum1 = c1->add(2,3);
    int sum2 = c1->add(2,3,4);
    int sum3 = c1->add(1,2,3,4);

    cout << sum1 <<"    " << sum2 << "   "<< sum3 << endl; 

    return 0;
}