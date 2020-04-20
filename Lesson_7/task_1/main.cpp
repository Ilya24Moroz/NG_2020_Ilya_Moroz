#include <iostream>
#include "student.h"

using namespace std;

int main()
{
    string userName;
    string userSurname;
    int userAge;
    string userSex;
    string userStudyForm;

    Student student;


    cout << "Enter your name: ";
    cin >> userName;
    student.setName(userName);


    cout << "Enter your surname: ";
    cin >> userSurname;
    student.setSurname(userSurname);


    cout << "Enter your age: ";
    cin >> userAge;
    student.setAge(userAge);


    cout << "Enter your sex: ";
    cin >> userSex;
    student.setSex(userSex);


    cout << "Enter your study form: ";
    cin >> userStudyForm;
    student.setStudyForm(userStudyForm);


    cout << student.getName() << endl;
    cout << student.getSurname() << endl;
    cout << student.getAge() << endl;
    cout << student.getSex() << endl;
    cout << student.getStudyForm() << endl;
    return 0;
}
