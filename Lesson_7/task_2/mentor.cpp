#include "mentor.h"
#include "student.h"
#include <iostream>
#include <string>

using namespace std;

Mentor::Mentor()
{

}
    string userName;
    string userSurname;
    int userAge;
    string userSex;
    string userStudyForm;
    Student Nstudent;

void Mentor::addStudent(){
    cout << "Enter your name: ";
    cin >> userName;
    Nstudent.setName(userName);

    cout << "Enter your surname: ";
    cin >> userSurname;
    Nstudent.setSurname(userSurname);

    cout << "Enter your age: ";
    cin >> userAge;
    Nstudent.setAge(userAge);

    cout << "Enter your sex: ";
    cin >> userSex;
    Nstudent.setSex(userSex);

    cout << "Enter your study form: ";
    cin >> userStudyForm;
    Nstudent.setStudyForm(userStudyForm);

    addStudent(Nstudent);
}
void Mentor::addStudent(Student student){
    for(int i =0; i<30; i++){
        if(studentsArr[i].getName() == " "){
            studentsArr[i] = student;
            return;
        }
    }
}
void Mentor::deleteStudent(){
    Student delStudent;
    string deleteName;
    string deleteSurname;
    int deleteAge;
    string deleteSex;
    string deleteStudyForm;

    cout << "Enter name: ";
    cin >> deleteName;
    cout << "Enter surname: ";
    cin >> deleteSurname;
    cout << "Enter age: ";
    cin >> deleteAge;
    cout << "Enter sex: ";
    cin >> deleteSex;
    cout << "Enter study form: ";
    cin >> deleteStudyForm;

    delStudent.setName(deleteName);
    delStudent.setSurname(deleteSurname);
    delStudent.setAge(deleteAge);
    delStudent.setSex(deleteSex);
    delStudent.setStudyForm(deleteStudyForm);

       deleteStudent(delStudent);
}
void Mentor::deleteStudent(Student deleteStudent){
    for(int index = 0; index < 30; index++){
        if(studentsArr[index].getName() == deleteStudent.getName() &&
                studentsArr[index].getSurname() == deleteStudent.getSurname() &&
                studentsArr[index].getAge() == deleteStudent.getAge()){
            studentsArr[index].setName(" ");
            studentsArr[index].setSurname(" ");
            studentsArr[index].setAge(0);
            studentsArr[index].setSex(" ");
            studentsArr[index].setStudyForm(" ");
        }
    }
    cout << "Student deleted!!!" << endl;
}
void Mentor::findStudent(string surname){
    for(int i = 0; i<30; i++){
        if(studentsArr[i].getSurname() == surname){
            cout << "Name: " << studentsArr[i].getName() << endl;
            cout << "Surname: " << studentsArr[i].getSurname() << endl;
            cout << "Age: " << studentsArr[i].getAge() << endl;
            cout << "Sex: " << studentsArr[i].getSex() << endl;
            cout << "Study form: " << studentsArr[i].getStudyForm() << endl;
            return;
        }
    }
}


