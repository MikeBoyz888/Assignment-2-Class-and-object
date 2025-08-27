#include <iostream>
using namespace std;

class Book{
    public:
    string title;
    string author;

    void displayInfo(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main(){
    Book book1;
    book1.title = "Nancy the cat";
    book1.author = "Ellen Shim";
    book1.displayInfo();
    return 0;
}