#include <bits/stdc++.h>
using namespace std;
int main()
{
 char ch;
 cout<<"Enter a character \n";
 cin>>ch;

 if(ch>='a'&&ch<='z') cout<<"It is a lowercase character\n";
 else if (ch>='A'&&ch<='Z') cout<<"It is a uppercasecharacter \n";
 else if(ch>='0'&&ch<='9') cout<<"It is a numeric digit\n";
 else cout<<"It is a special character";
}