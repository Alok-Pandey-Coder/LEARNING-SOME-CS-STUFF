#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    // Constructor to initialize values
    Rectangle(int l, int w) : length(l), width(w) {}

    // Implicitly inline member function
    int calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect(10, 5);
    
    // Calling the inline member function
    cout << "Area: " << rect.calculateArea() << endl;

    return 0;
}