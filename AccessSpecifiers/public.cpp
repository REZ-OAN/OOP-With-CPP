#include <iostream>
using namespace std;

class Example {
public:
    int x; // Public attribute
    void display() { // Public method
        cout << "x = " << x << endl;
    }
};

int main() {
    Example obj;
    obj.x = 10;    // Direct access to public member
    obj.display(); // Call public method
    return 0;
}
