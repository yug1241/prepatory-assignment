#include <iostream>
#include <cstring>
using namespace std;
int main() {
 const int MAX_SIZE = 5; 
 const char* strings[MAX_SIZE] = {"apple", "banana",
"apple", "orange", "banana"};
 cout << "Duplicate strings in the array are: " <<endl;
 for (int i = 0; i < MAX_SIZE - 1; ++i) {
 for (int j = i + 1; j < MAX_SIZE; ++j) {
 if (strcmp(strings[i], strings[j]) == 0) {
 cout << strings[i] << endl;
 break; 
 }
 }
 }
 return 0;
}