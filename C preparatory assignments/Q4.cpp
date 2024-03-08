#include <bits/stdc++.h>
using namespace std;
int main()
{
string
subjects[5]={"Maths","Science","English","Hindi","SocialStudies"};
 string marks[5]={"0"};
 for(int i=0;i<5;i++){
 int input;
 cout<<"Enter marks of "<<subjects[i]<<endl;
 cin>>input;
 if(input>=90&&input<=100) marks[i]="Excellent";
 else if(input>=80&&input<90) marks[i]='A';
 else if(input>=70&&input<80) marks[i]='B';
 else if (input>=60&&input<70) marks[i]='C';
 else if(input<60&&input>=0) marks[i]='F';
 else marks[i]="Invalid input data";
 }
 for(int i=0;i<5;i++){
 cout<<"Grade of "<<subjects[i]<<" is"<<marks[i]<<endl;
 }
}