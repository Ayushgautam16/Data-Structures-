// pass by refrence and value

// 1) pass by value example 
#include<iostream>
using namespace std;

void doSomething(int num){
    cout<<num <<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;

}

void kuchkarkedikhao(string s){
    s[0]='t';
    cout<<s<<endl;
}

int main(){
    int num = 10;
    doSomething(num);
    cout<<num <<endl;


string s = "raj";
kuchkarkedikhao(s);
cout<<s<<endl;

// op---->
// taj
// raj


// op---->
// 10
// 15
// 20



// op---->  2nd time ye aaya 12 line me jo likha hai 
// 10
// 15
// 20
// 10
return 0;
}