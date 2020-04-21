#include "mentor.h"
#include "student.h"
#include "univer.h"
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
    cout << "Enter name: ";
    cin >> userName;
    Nstudent.setName(userName);

    cout << "Enter surname: ";
    cin >> userSurname;
    Nstudent.setSurname(userSurname);

    cout << "Enter age: ";
    cin >> userAge;
    Nstudent.setAge(userAge);

    cout << "Enter sex: ";
    cin >> userSex;
    Nstudent.setSex(userSex);

    cout << "Enter study form: ";
    cin >> userStudyForm;
    Nstudent.setStudyForm(userStudyForm);

    addStudent(Nstudent);
}
void Mentor::addStudent(Student student){
    for(int i =0; i<30; i++){
        if(getStudentArr(i).getName() == " "){
            setStudentArr(student, i);
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
    delStudent.setName(deleteName);
    cout << "Enter surname: ";
    cin >> deleteSurname;
    delStudent.setSurname(deleteSurname);
    cout << "Enter age: ";
    cin >> deleteAge;
    delStudent.setAge(deleteAge);
    cout << "Enter sex: ";
    cin >> deleteSex;
    delStudent.setSex(deleteSex);
    cout << "Enter study form: ";
    cin >> deleteStudyForm;
    delStudent.setStudyForm(deleteStudyForm);
    deleteStudent(delStudent);
}

void Mentor::deleteStudent(Student deleteStudent){
    for(int index = 0; index < 30; index++){
        if(getStudentArr(index).getName() == deleteStudent.getName() &&
                getStudentArr(index).getSurname() == deleteStudent.getSurname()){
            deleteStudent.setName("");
            deleteStudent.setSurname("");
            deleteStudent.setAge(0);
            deleteStudent.setSex("");
            deleteStudent.setStudyForm("");
            setStudentArr(deleteStudent, index);
            cout << "Student deleted!!!" << endl;
        }
    }
}
void Mentor::findStudent(string name, string surname){
    for(int i = 0; i<30; i++){
        if(getStudentArr(i).getName() == name &&
                getStudentArr(i).getSurname() == surname){
            cout << "Name: " << getStudentArr(i).getName() << endl;
            cout << "Surname: " << getStudentArr(i).getSurname() << endl;
            cout << "Age: " << getStudentArr(i).getAge() << endl;
            cout << "Sex: " << getStudentArr(i).getSex() << endl;
            cout << "Study form: " << getStudentArr(i).getStudyForm() << endl;
            return;
        }
    }
}


