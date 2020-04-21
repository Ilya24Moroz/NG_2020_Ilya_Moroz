#ifndef UNIVER_H
#define UNIVER_H

#include "student.h"
#include "mentor.h"

class Univer
{
public:
    Univer();
    void addMentor(string name, string surname);
    void removeMentor(string name, string surname);
    void addStudent(string name, string surname);
    void removeStudent(string name, string surname);
    void findStudent(string name, string surname);
    void showAllStudents();
    void showStudentsByFacultet(string facultet);

private:
    Mentor mentorArr[100];
};

#endif // UNIVER_H
