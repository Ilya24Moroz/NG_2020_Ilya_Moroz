#include "student.h"

Student::Student()
{
    name = "";
    surname = "";
    age = 0;
    sex = "";
    studyForm = "";
}

string Student::getName(){return name;}
void Student::setName(string userName){name = userName;}

string Student::getSurname(){return surname;}
void Student::setSurname(string userSurname){surname = userSurname;}

int Student::getAge(){return age;}
void Student::setAge(int userAge){age = userAge;}

string Student::getSex(){return sex;}
void Student::setSex(string userSex){sex = userSex;}

string Student::getStudyForm(){return studyForm;}
void Student::setStudyForm(string userStudyForm){studyForm = userStudyForm;}
