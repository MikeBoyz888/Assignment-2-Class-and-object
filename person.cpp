#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
    string address;
    string phoneNum;

    void displayInfo(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone Number: " << phoneNum << endl;
    }

    bool isAdult(){
        return age >= 18;
    }
    
    void move(string newAddress){
        address = newAddress;
        cout << "Moved to new address: " << address << endl;
    }

    void greet(){
        cout << "Hello, my name is " << name << endl;
    }
};

int main(){
    Person person1;
    person1.name = "Mai Dang QUang";
    person1.age = 23;
    person1.address = "1 Vo Van Ngan";
    person1.phoneNum = "0910002333";
    person1.displayInfo();

    if (person1.isAdult()){
        cout << "This person is an adult." << endl;
    }
    else {
        cout << "This person is not an adult." << endl;
    }

    person1.greet();
    person1.move("56 Hoang Dieu 2");
    person1.displayInfo();
    return 0;
}