#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define MAX_STUDENTS 10
#define MAX_NAME_LENGTH 50
int compareStrings(const void *a, const void *b) {
 return strcmp(*(const char **)a, *(const char **)b);
}
int main() {
 char nameOfStudents[MAX_STUDENTS][MAX_NAME_LENGTH];
 int numStudents;
 cout << "Enter the number of students (up to 10): ";
 cin >> numStudents;
 if (numStudents < 1 || numStudents > MAX_STUDENTS) {
 cout << "Invalid number of students." << endl;
 return 1;
 }
 cin.ignore(); 
 for (int i = 0; i < numStudents; i++) {
 cout << "Enter name of student " << i + 1 << ": ";
 cin.getline(nameOfStudents[i], MAX_NAME_LENGTH);
 }
 qsort(nameOfStudents, numStudents,
sizeof(nameOfStudents[0]), compareStrings);
 cout << "\nSorted names of students:" << endl;
 for (int i = 0; i < numStudents; i++) {
 cout << nameOfStudents[i] << endl;
 }
 return 0;
}