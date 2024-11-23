#include <iostream>
using namespace std;

class Base {
protected:
    int x; // Protected attribute
public:
    void setX(int value) { x = value; }
};

class Derived : public Base { // Inheritance (more on this will added later)
public:
    void display() {
        cout << "x = " << x << endl; // Access protected member of Base
    }
};

int main() {
    Derived obj;
    obj.setX(20); // Public method in Base to set x
    obj.display(); // Output: x = 20
    return 0;
}