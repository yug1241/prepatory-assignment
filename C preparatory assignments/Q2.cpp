#include <iostream>
using namespace std;
int main() {
int numbers;
cout<<"Enter a number \n ";
cin>>numbers;
int fact=1;
for(int i=1;i<=numbers;i++) fact*=i;
cout<<"Factorial of the numbers is -> "<<fact<<endl;
}