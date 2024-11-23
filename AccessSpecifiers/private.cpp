#include <iostream>
using namespace std;

class Example {
private:
    int x; // Private attribute
public:
    void setX(int value) { // Public method to modify private data
        x = value;
    }
    void display() {
        cout << "x = " << x << endl;
    }
};

int main() {
    Example obj;
    // obj.x = 10; // Error: x is private
    obj.setX(10);   // Modify x using a public method
    obj.display();  // Output: x = 10
    return 0;
}