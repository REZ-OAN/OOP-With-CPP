#include<iostream>

using namespace std;

class ClassA {
private:
    int secret;

public:
    ClassA(int value) : secret(value) {}

    // Declare ClassB as a friend
    friend class ClassB;
};

class ClassB {
public:
    void revealSecret(const ClassA& obj) {
        cout << "Secret: " << obj.secret << endl; // Access private data
    }
};

int main() {
    ClassA a(99);
    ClassB b;
    b.revealSecret(a); // Access private member of ClassA
    return 0;
}
