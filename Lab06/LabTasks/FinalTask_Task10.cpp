#include <iostream>
using namespace std;

//School management Sysytem
//Hierarchical Inheritance
class Course {
    protected:
        string courseName;

    public:
        Course(string c) {
            courseName = c;
        }

        void showCourse() {
            cout << "Course Name: " << courseName << endl;
        }
};

//Single Inheritance + Hierarchical Inheritance
class Teacher : virtual public Course {
    private:
        long int salary;

    protected:
        string teacherName;

    public:
        Teacher(string c, string t_n, long int s) : Course(c) {
            teacherName = t_n;
            salary = s;
        }

        void showTeacher() {
            cout << "Teacher Name: " << teacherName << endl;
        }
};
//single inheritance + Hierarchical Inheritance
class Exams : virtual private Course {
    public:
        float grade;

        Exams(string c, float g) : Course(c) {
            grade = g;
        }

        void showExams() {
            cout << "Previous grade in the Exam of this subject: " << grade << endl;
        }
};

//Multiple Inheritance + Hierarchical Inheritance
class Student : virtual protected Course, public Exams {
    protected:
        int student_ID;
        string studentName;

    public:
        Student(string c, float g, int id, string name) : Course(c), Exams(c, g) {
            student_ID = id;
            studentName = name;
        }

        void showStudent() {
            cout << "Student Name: " << studentName << endl;
            cout << "Student ID: " << student_ID << endl;
        }
};

//Multiple Inheritance + multilevel 
class TeachingAssistant : public Student, public Teacher {
    public:
        int workingHours;
        int assignmentsChecked;
        string TAName;

        TeachingAssistant(string c, float g, int id, string name, string t_n, long int s, int hours, int assignments) : Student(c, g, id, name), Teacher(c, t_n, s), Course(c) {
            workingHours = hours;
            assignmentsChecked = assignments;
            TAName = studentName;
        }

        void showTA() {
            cout << "Working Hours: " << workingHours << endl;
            cout << "Number of assignments checked: " << assignmentsChecked << endl;
        }
};

int main () {
    TeachingAssistant t1("OOP", 4.0, 101, "Ali", "Sara", 890000, 12, 5);
    t1.showStudent();
    t1.showExams();
    t1.showTeacher();
    t1.showCourse(); //virtual inheritance
    t1.showTA();
}

// Diamond Structure

//        Course 
//      /       \  
//     /          Exams
//    /              |
// Teacher         Student
// \                    /
//  \                  /
//   TeachingAssistant