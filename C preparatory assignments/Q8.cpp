#include <iostream>
#include <string>
using namespace std;
struct Student {
 string studentName;
 string rollNo;
 int totalMarks;
};
void readStudentData(Student& student) {
 cout << "Enter student name: ";
 getline(cin, student.studentName);
 cout << "Enter roll number: ";
 getline(cin, student.rollNo);
 cout << "Enter total marks obtained: ";
 cin >> student.totalMarks;
}
void displayStudentData(const Student& student) {
 cout << "\nStudent Name: " << student.studentName <<
endl;
 cout << "Roll Number: " << student.rollNo << endl;
 cout << "Total Marks Obtained: " << student.totalMarks
<< endl;
}
int main() {
 Student student;
 readStudentData(student);
 displayStudentData(student);
 return 0;
}