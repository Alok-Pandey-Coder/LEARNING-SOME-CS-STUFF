#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    int speed;

public:
    // Member function defined directly inside the class
    void setDetails(string b, int s) {
        brand = b;
        speed = s;
    }

    // Member function declared inside, defined outside
    void displayInfo();
};

// Defining the member function outside the class using the scope resolution operator (::)
void Car::displayInfo() {
    cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
}

int main() {
    Car myCar; // Create an object of the Car class
    
    // Calling member functions using the dot (.) operator
    myCar.setDetails("Tesla", 120);
    myCar.displayInfo();

    return 0;
}