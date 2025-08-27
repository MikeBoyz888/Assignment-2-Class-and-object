#include <iostream>
using namespace std;

class Car {
    public:
    string brand;
    int year;
    void displayInfo(){
        cout <<"Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

int main(){
    Car car1;
    car1.brand = "Tetsla";
    car1.year = 2023;
    car1.displayInfo();
    return 0;
}