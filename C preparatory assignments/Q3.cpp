#include <bits/stdc++.h>
using namespace std;
int fibonacci_numbers(int n)
{
 if(n == 0||n==1){
 return n;
 }
 else{
 return fibonacci_numbers(n-2) + fibonacci_numbers(n-1);
 }
}
int main() {int n;
cout<<"Enter a number: \n";
 cin>>n;
 cout<<"Fibonacci upto "<<n<<" numbers is"<<fibonacci_numbers(n);
}