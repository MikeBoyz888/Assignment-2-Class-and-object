#include <iostream>
using namespace std;

class Rectangle{
    public:
    int width;
    int height;

    int calculateArea(){
        return width * height;
    }
};

int main(){
    Rectangle rectangle1;
    rectangle1.width = 4;
    rectangle1.height = 10;
    cout << "Area :" << rectangle1.calculateArea() << endl;
    return 0;
}