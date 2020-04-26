#include "mentor.h"
#include "student.h"
#include <iostream>
#include <string>

using namespace std;

Mentor::Mentor()
{

}

void Mentor::addStudent(){
    string userName;
    string userSurname;
    int userAge;
    string userSex;
    string userStudyForm;
    Student Nstudent;

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
    for(int index = 0; index<30; index++){
        if(getStudentsArr(index).getName() == ""){
            setStudentsArr(student, index);
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
        if(getStudentsArr(index).getName() == deleteStudent.getName() &&
                getStudentsArr(index).getSurname() == deleteStudent.getSurname() &&
                getStudentsArr(index).getAge() == deleteStudent.getAge()){
            deleteStudent.setName("");
            deleteStudent.setSurname("");
            deleteStudent.setAge(0);
            deleteStudent.setSex("");
            deleteStudent.setStudyForm("");
            setStudentsArr(deleteStudent, index);
        }
    }
    cout << "Student deleted!!!" << endl;
}
void Mentor::findStudent(string surname){
    for(int i = 0; i<30; i++){
        if(studentsArr[i].getSurname() == surname){
            cout << "Name: " << getStudentsArr(i).getName() << endl;
            cout << "Surname: " << getStudentsArr(i).getSurname() << endl;
            cout << "Age: " << getStudentsArr(i).getAge() << endl;
            cout << "Sex: " << getStudentsArr(i).getSex() << endl;
            cout << "Study form: " << getStudentsArr(i).getStudyForm() << endl;
            return;
        }
    }

}
