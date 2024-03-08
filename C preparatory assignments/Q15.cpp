#include <bits/stdc++.h>
using namespace std;
int main()
{
 string str;
 cout<<"Enter a string \n";
 getline(cin,str);
 int arr[26]={0};
 for(auto x: str){
 x=tolower(x);
 arr[x-'a']++;
 }
 for(int i=0;i<26;i++){
 if(arr[i]>0)cout<<char('A'+i)<<':'<<arr[i]<<endl;
 }
}