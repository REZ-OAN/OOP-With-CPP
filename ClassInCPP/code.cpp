#include<iostream>

using namespace std;

// Class in C++ (definition)

class Triangle {
    private :
        float height;
        float breadth;
    public :
        void set_bh(int a, int b) {
            height = b;
            breadth = a;
        }
        double get_area() {
            return height * breadth * .5;
        }
};

// Declaration

int main() {
    Triangle T1;
    T1.set_bh(10,5);
    cout<<T1.get_area()<<endl; 
}