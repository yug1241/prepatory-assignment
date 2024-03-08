#include <bits/stdc++.h>
using namespace std;
int main()
{
 string str;
 cout<<"Enter a string \n";
 getline(cin,str);
 int size=str.length();
 for(int i=0;i<size/2;i++) swap(str[i],str[size-i-1]);
 cout<<"reversed string is -> "<<str<<endl;
}