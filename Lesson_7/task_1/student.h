#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;


class Student
{

public:
    Student();
    string getName(){return name;}
    void setName(string userName){name = userName;}

    string getSurname(){return surname;}
    void setSurname(string userSurname){surname = userSurname;}

    int getAge(){return age;}
    void setAge(int userAge){age = userAge;}

    string getSex(){return sex;}
    void setSex(string userSex){sex = userSex;}

    string getStudyForm(){return studyForm;}
    void setStudyForm(string userStudyForm){studyForm = userStudyForm;}

private:
    string name;
    string surname;
    int age;
    string sex;
    string studyForm;
};

#endif // STUDENT_H
