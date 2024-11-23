#include <iostream>
using namespace std;

class Car {
public: // Access specifier
    string brand;  // Attribute (data)
    int year;      // Attribute (data)

    void displayInfo() { // Method (function)
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car myCar;  // Object of class Car
    myCar.brand = "Toyota";  // Setting attributes
    myCar.year = 2023;

    myCar.displayInfo(); // Calling method
    return 0;
}
