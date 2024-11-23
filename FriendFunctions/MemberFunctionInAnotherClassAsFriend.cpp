#include <iostream>
using namespace std;

// circular dependency issue should be in mind
// Forward declaration
class ClassA;
class ClassB;
// Declare ClassB first with just the member function declaration
class ClassB {
    public:
        void showData(const ClassA& obj);
};

// Now define ClassA with friend declaration
class ClassA {
    private:
        int privateData;
    protected:
        int protectedData;
    public:
        ClassA(int priv, int prot) {
            privateData = priv;
            protectedData = prot;
        }
        
        // Make specific member function of ClassB a friend
        friend void ClassB::showData(const ClassA&);
};

// Define ClassB's member function after both classes are fully declared
void ClassB::showData(const ClassA& obj) {
    cout << "Private Data: " << obj.privateData << endl;
    cout << "Protected Data: " << obj.protectedData << endl;
}

int main() {
    ClassA objA(10, 20);
    ClassB objB;
    objB.showData(objA);
    return 0;
}