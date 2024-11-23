#include <iostream>
using namespace std;

class Example {
public:
    static int count;

    Example() {
        count++;
    }

    // Static member method
    static void displayCount() {
        cout << "Count: " << count << endl;
    }
};

int Example::count = 0;

int main() {
    Example e1, e2, e3;
    Example::displayCount(); // Access using class name
    return 0;
}