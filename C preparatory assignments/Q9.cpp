#include <bits/stdc++.h>
using namespace std;
string decToHexa(int n)
{
 string ans = "";
 while (n != 0) {
 int rem = 0;

 char ch;
 rem = n % 16;
 if (rem < 10) {
 ch = rem + 48;
 }
 else {
 ch = rem + 55;
 }
 ans += ch;
 n = n / 16;
 }
 int i = 0, j = ans.size() - 1;
 while(i <= j)
 {
 swap(ans[i], ans[j]);
 i++;
 j--;
 }
 return ans;
}
string decToOctal(int n)
{
 int octalNum[100];
string res;
 int i = 0;
 while (n != 0) {
 octalNum[i] = n % 8;
 n = n / 8;
 i++;
 }
 for (int j = i - 1; j >= 0; j--)
 {
 res.push_back(octalNum[j]+'0');
 }
return res;
}
string decToBinary(int n)
{
 int binaryNum[32];
 string res;
 int i = 0;
 while (n > 0) {
 binaryNum[i] = n % 2; 
 n = n / 2;
 i++;
 }

 for (int j = i - 1; j >= 0; j--)
 {
 res.push_back(binaryNum[j]+'0');
 }
return res;
}

int main()
{
 int n;
 cout<<"Enter a number: \n";
 cin>>n;

 cout<<"Given number : "<<n<<endl;
 cout<<"Binary equivalent: "<<decToBinary(n)<<endl;
 cout<<"Octal equivalnet: "<<decToOctal(n)<<endl;
 cout<<"Hexadecimal equivalent: "<<decToHexa(n)<<endl;
}