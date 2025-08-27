#include <iostream>
#include <cmath> // thư viện cho các phép toán, trong code này sử dụng pi
using namespace std;

class Circle{
    public:
    double radius;
    string color;

    bool isRadiusValid(){ //kiểm tra bán kính có phải là số dương ko
        return radius > 0;
    }

    double circumference(){ //chu vi hình tròn: 2*pi*bán kính
        if (!isRadiusValid()){
            cout << "Radius is not valid!" << endl;
            return 0;
        }
        else{
            return 2 * M_PI * radius; //M_PI là số pi
        }
    }

    double area(){ //diện tích hình tròn: pi*bán kính^2
        if (!isRadiusValid()){
            cout << "Radius is not valid!" << endl;
            return 0;
        }
        else{
            return M_PI * radius * radius;
        }
    }

    void displayColor(){
        cout << "The circle color: " << color << endl;
    } 
};

int main(){
    Circle circle1;
    cout << "Enter the cirle's radius: ";
    cin >> circle1.radius;
    cout << "Enter the circle color: ";
    cin >> circle1.color;

    cout << "The circle's circumference :" << circle1.circumference() << endl;
    cout << "The circle's area :" << circle1.area() << endl;
    circle1.displayColor();
    return 0;
}