#include "univer.h"
#include "mentor.h"
Univer::Univer()
{

}
string studentSurname, studentName;
void Univer::addMentor(string name, string surname){
    for (int index = 0; index < 100; index++) {
            if (mentorArr[index].getNameMentor() == "") {
                string lesson, facultet;
                cout << "Enter mentor subject: ";
                cin >> lesson;
                cout << "Enter mentor facultet: ";
                cin >> facultet;
                mentorArr[index].setNameMentor(name);
                mentorArr[index].setSurnameMentor(surname);
                mentorArr[index].setLesson(lesson);
                mentorArr[index].setFacultet(facultet);
                return;
            }
        }
}
void Univer::removeMentor(string name, string surname){
    for (int index = 0; index < 100; index++) {
            if (mentorArr[index].getNameMentor() == name &&
                    mentorArr[index].getSurnameMentor() == surname) {
                mentorArr[index].setNameMentor("");
                mentorArr[index].setSurnameMentor(" ");
                mentorArr[index].setLesson(" ");
                mentorArr[index].setFacultet(" ");
                return;
            }
        }
    cout << "Mentor removed" << endl;
}
void Univer::addStudent(string name, string surname){
    for (int index = 0; index < 100; index++) {
            if (mentorArr[index].getNameMentor() == name &&
                    mentorArr[index].getSurnameMentor() == surname) {
                mentorArr[index].addStudent();
                return;
            }
        }
}
void Univer::removeStudent(string name, string surname){
    for (int index = 0; index < 100; index++) {
            if (mentorArr[index].getNameMentor() == name &&
                    mentorArr[index].getSurnameMentor() == surname) {
                mentorArr[index].deleteStudent();
                return;
            }
        }
}
void Univer::findStudent(string name, string surname){
    for (int index = 0; index < 100; index++) {
            if (mentorArr[index].getNameMentor() == name &&
                    mentorArr[index].getSurnameMentor() == surname) {
                cout << "Enter student name: ";
                cin >> studentName;
                cout << "Enter student surname: ";
                cin >> studentSurname;
                mentorArr[index].findStudent(studentName, studentSurname);
                return;
            }
        }
}
void Univer::showAllStudents(){
    for (int index = 0; index < 100; index++) {
           if (mentorArr[index].getNameMentor() != " ") {
               cout << "Mentor : " << endl;
               cout << "Name: " << mentorArr[index].getNameMentor() << endl;
               cout << "Surname: " << mentorArr[index].getSurnameMentor() << endl;
               cout << "Lesson: " << mentorArr[index].getLesson() << endl;
               cout << "Facultet: " << mentorArr[index].getFacultet() << endl;
               cout << "Students: " << endl;
               for (int index_students = 0; index_students < 30; index_students++) {
                   if (mentorArr[index].getStudentArr(index_students).getName() != " ") {
                       cout << "Name: " << mentorArr[index].getStudentArr(index_students).getName() << endl;
                       cout << "Surname: " << mentorArr[index].getStudentArr(index_students).getSurname() << endl;
                       cout << "Age: " << mentorArr[index].getStudentArr(index_students).getAge() << endl;
                       cout << "Sex: " << mentorArr[index].getStudentArr(index_students).getSex() << endl;
                       cout << "Study form: " << mentorArr[index].getStudentArr(index_students).getStudyForm() << endl;;

                   }
               }
               return;
           }
       }
}
void Univer::showStudentsByFacultet(string facultet){
    for (int counter = 0; counter < 100; counter++) {
           if (mentorArr[counter].getFacultet() == facultet) {
               cout << "Mentor : " << endl;
               cout << endl;
               cout << "Name: " << mentorArr[counter].getNameMentor() << endl;
               cout << "Surname: " << mentorArr[counter].getSurnameMentor() << endl;
               cout << "Lesson: " << mentorArr[counter].getLesson() << endl;
               cout << "Facultet: " << mentorArr[counter].getFacultet() << endl;
               cout << endl;
               cout << "Students: " << endl;
               for (int count_students = 0; count_students < 30; count_students++) {
                   if (mentorArr[counter].getStudentArr(count_students).getName() != " ") {
                       cout << "Name: " << mentorArr[counter].getStudentArr(count_students).getName() << endl;
                       cout << "Surname: " << mentorArr[counter].getStudentArr(count_students).getSurname() << endl;
                       cout << "Age: " << mentorArr[counter].getStudentArr(count_students).getAge() << endl;
                       cout << "Sex: " << mentorArr[counter].getStudentArr(count_students).getSex() << endl;
                       cout << "Study form: " << mentorArr[counter].getStudentArr(count_students).getStudyForm() << endl;
                       cout << endl;
                   }
               }
           }
       }
}
