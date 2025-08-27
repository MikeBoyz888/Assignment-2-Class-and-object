#include <iostream>
using namespace std;

class Laptop{
    public:
    string brand;
    string model;
    int ram;
    int storage;
    string gpu;

    void displayInfo(){
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << ram << "GB" << endl;
        cout << "Storage: " << storage << "GB" << endl;
        cout << "GPU: " << gpu << endl;
    }

    void checkRAM(int requiredRAM){
        if (ram > requiredRAM){
            cout << "This laptop has enough RAM to run the software" << endl;
        }
        else{
            cout << "This laptop does not have enough RAM to run the software" << endl;
        }
    }

    void upgradeRAM(int additionalRam) {
        if (additionalRam > 0) {
            ram += additionalRam;
            cout << "RAM upgraded by " << additionalRam << "GB. New RAM: " << ram << "GB" << endl;
        } else {
            cout << "Invalid RAM upgrade amount!" << endl;
        }
    }
};

int main(){
    Laptop laptop1;
    laptop1.brand = "MSI";
    laptop1.brand = "GF 65";
    laptop1.ram = 8;
    laptop1.storage = 256;

    laptop1.displayInfo();

    laptop1.checkRAM(16);

    laptop1.upgradeRAM(8);
    laptop1.displayInfo();
    laptop1.checkRAM(16);
    return 0;
}