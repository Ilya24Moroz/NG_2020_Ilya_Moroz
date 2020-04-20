#include <iostream>
#include "student.h"
#include "mentor.h"

using namespace std;

int main()
{
    Mentor mentor;
    string findSurname;
    int choice;

    while(true){
        cout << "1 - add student" << endl;
        cout << "2 - delete student" << endl;
        cout << "3 - find student" << endl;
        cout << "0 - stop program" << endl;
        cout << "Enter action: ";
        cin >> choice;
        switch (choice) {
        case 0:
            return 0;
            break;
        case 1:
            mentor.addStudent();
            break;
        case 2:
            mentor.deleteStudent();
            break;
        case 3:
            cout << "Enter surname of student:";
            cin >> findSurname;
            mentor.findStudent(findSurname);
            break;
        default:
            cout << "Program finally";
        }
    }
    return 0;
}
