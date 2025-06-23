#include<bits/stdc++.h>
using namespace std;
int main(){
string s = "Ayush gautam";
int len = s.size(); 
cout<<len<<endl;
s[len-1]= 'x';
cout<<s[len - 1];
return 0;
}


// o/p ---->
// 12
// x