#include<iostream>

using namespace std;

class Example {
private:
    int data;

public:
    Example(int value) {
        this->data = value;
    }

    // Friend function declaration
    friend void display(const Example& obj);
};

// Friend function definition here value is passed as a reference
void display(const Example& obj) {
    std::cout << "Data: " << obj.data << std::endl;
}

int main() {
    Example obj(42);
    display(obj); // Access private data through friend function
    return 0;
}
