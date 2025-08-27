#include <iostream>
using namespace std;

class Course{
    public:
    string courseName;
    string courseCode;
    int credits;
    string instructorName;

    void displayInfo(){
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Credits: " << credits << endl;
        cout << "Instructor Name: " << instructorName << endl;
    }

    bool isHighCredit(){
        return credits > 3;
    }
    
    bool islabRequired(){
        bool requiresLab = credits > 4;
        if (requiresLab) {
            cout << "This course requires a lab room." << endl;
        } else {
            cout << "This course does not require a lab room." << endl;
        }
        return requiresLab;
    }
};

int main(){
    Course course1;
    course1.courseName = "Object Oriented Programming";
    course1.courseCode = "CS202";
    course1.credits = 4;
    course1.instructorName = "Huynh Xuan Phung";
    course1.displayInfo();

    if (course1.isHighCredit()){
        cout << "This is a high credit course." << endl;
    }
    else {
        cout << "This is not a high credit course." << endl;
    }

    course1.islabRequired();
    return 0;
}