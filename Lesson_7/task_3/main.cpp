#include <iostream>
#include "student.h"
#include "mentor.h"
#include "univer.h"

using namespace std;

int main()
{
    Univer university;
    string mentorName, mentorSurname, facultet;
    int choice;


    while(true){
        cout << "1 - add Mentor" << endl;
        cout << "2 - delete Mentor" << endl;
        cout << "3 - add Student" << endl;
        cout << "4 - delete Student" << endl;
        cout << "5 - find student" << endl;
        cout << "6 - show all students" << endl;
        cout << "7 - show all students by facultet" << endl;
        cout << "0 - stop program" << endl;

        cout << "Enter action: ";
        cin >> choice;

        if(choice > 0){
            cout << "Enter mentor name: ";
            cin >> mentorName;
            cout << "Enter mentor surname: ";
            cin >> mentorSurname;
        }

        switch (choice) {
            case 1:
                university.addMentor(mentorName, mentorSurname);
                break;
            case 2:
                university.removeMentor(mentorName, mentorSurname);
                break;
            case 3:
                university.addStudent(mentorName, mentorSurname);
                break;
            case 4:
                university.removeStudent(mentorName, mentorSurname);
                break;
            case 5:
                university.findStudent(mentorName, mentorSurname);
                break;
            case 6:
                university.showAllStudents();
                break;
            case 7:
                cout << "Enter facultet: ";
                cin >> facultet;
                university.showStudentsByFacultet(facultet);
                break;
            default:
                cout << "Program finish" << endl;
                return 0;

        }
        cout << "done" << endl;
    }
    return 0;
}
