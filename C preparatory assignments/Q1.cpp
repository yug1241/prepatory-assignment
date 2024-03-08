#include <iostream>
using namespace std;
int main() {
int numbers;
cout<<"How many numbers you want to insert \n ";
cin>>numbers;
int maximum=-1;
while(numbers--){
int num;
cout<<"Enter next number \n";
cin>>num;
maximum=max(num,maximum);
}
cout<<"The maximum number among the input numbers is ->"<<maximum<<endl;
}