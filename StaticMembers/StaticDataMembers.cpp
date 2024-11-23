#include <iostream>
using namespace std;

class Example {
public:
    static int count; // Declaration of static data member
    Example() { // Constructor (more on this will explained later
        count++; // Increment static member
    }
};

// Definition and initialization of static data member
int Example::count = 0;

int main() {
    Example e1, e2;
    cout << "Count: " << Example::count << endl; // Access using class name
    return 0;
}