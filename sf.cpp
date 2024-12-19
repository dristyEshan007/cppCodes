#include <bits/stdc++.h>
using namespace std;

class Base {
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1(); // Return type corrected
    int getData2();
};

void Base::setData() {
    data1 = 10;
    data2 = 20;
}

int Base::getData1() { // Return type corrected
    return data1;
}

int Base::getData2() {
    return data2;
}

class Derived : public Base { // Class is being derived publicly
    int data3;
public:
    void process();
    void display();
};

void Derived::process() {
    data3 = data2 * getData1(); // Fixed private access issue via getter
}

void Derived::display() {
    cout << "Value of Data 1 is: " << getData1() << endl;
    cout << "Value of Data 2 is: " << data2 << endl;
    cout << "Value of Data 3 is: " << data3 << endl;
}

int main() {
    Derived obj;
    obj.setData();    // Set base class data
    obj.process();    // Process to compute data3
    obj.display();    // Display all data

    return 0;
}
