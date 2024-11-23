#include <iostream>
using namespace std;

class Base {
protected:
    int protectedData;

public:
    Base(int value) {
        protectedData = value;
    }

    // Declare a non-member function as a friend
    friend void accessProtected(const Base& obj);
};

// Friend function definition
void accessProtected(const Base& obj) {
    cout << "Protected Data: " << obj.protectedData << endl;
}

int main() {
    Base obj(22);
    accessProtected(obj); // Access protected member
    return 0;
}
