#include <iostream>
using namespace std;

class Base {
protected:
    int protectedData;

public:
    Base(int value) : protectedData(value) {}

    // Declare another class as a friend
    friend class FriendClass;
};

class FriendClass {
public:
    void displayProtected(const Base& obj) {
        cout << "Accessing Protected Data: " << obj.protectedData << endl;
    }
};

int main() {
    Base obj(99);
    FriendClass friendObj;
    friendObj.displayProtected(obj); // Access protected member
    return 0;
}
