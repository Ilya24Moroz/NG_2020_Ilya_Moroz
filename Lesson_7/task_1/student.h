#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;


class Student
{

public:
    Student();
    string getName();
    void setName(string userName);

    string getSurname();
    void setSurname(string userSurname);

    int getAge();
    void setAge(int userAge);

    string getSex();
    void setSex(string userSex);

    string getStudyForm();
    void setStudyForm(string userStudyForm);

private:
    string name;
    string surname;
    int age;
    string sex;
    string studyForm;
};

#endif // STUDENT_H
