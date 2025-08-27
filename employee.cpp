#include <iostream>
using namespace std;

class Employee{
    public:
    string name;
    double salary;

    void displayInfo(){
        cout << "Name: " << name << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main(){
    Employee employee1;
    employee1.name = "Phuc";
    employee1.salary = 85000;
    employee1.displayInfo();
    return 0;
}