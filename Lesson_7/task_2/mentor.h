#ifndef MENTOR_H
#define MENTOR_H
#include "student.h"

class Mentor
{

public:
    Mentor();
    void addStudent();
    void addStudent(Student student);
    void deleteStudent();
    void deleteStudent(Student student);
    void findStudent(string surname);
    // get/set information about mentor
    string getNameMentor(){return nameMentor;}
    void setNameMentor(string Name){nameMentor = Name;}

    string getSurnameMentor(){return surnameMentor;}
    void setSurnameMentor(string Surname){surnameMentor = Surname;}

    string getLesson(){return lesson;}
    void setLesson(string Lesson){lesson = Lesson;}

    string getFacultet(){return facultet;}
    void setFacultet(string Facultet){facultet = Facultet;}
private:
    string nameMentor;
    string surnameMentor;
    string lesson;
    string facultet;
    Student studentsArr[30];
};

#endif // MENTOR_H
