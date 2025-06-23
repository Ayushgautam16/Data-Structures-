#include<iostream>
using namespace std;
int main(){
// write a program to check u can drive or not by tking input 

// int age;
// cin>>age;

// if(age >=18){
//     cout<<"you can drive you are an adult ";

// }

// else if(age<18){
//     cout<<"you are under 18 you are not allowed to drive ";
// }


/*
Question
A school grading system 
a , below 25 - f .......
*/


int marks;
    cout<<"enter the marks: ";
    cin>> marks ;
    if(marks<25){
    cout <<"Fail";

    }
    if(marks>=25&& marks<=44){
        cout<<"E";
    }
    if(marks>=24&& marks<=49){
        cout<<"D";
    }
    if(marks>=50&& marks<=59){
        cout<<"C";
    }
    if(marks>=60&& marks<=79){
        cout<<"B";
    }
    if(marks>=80&& marks<=89){
        cout<<"A";
    }
    if(marks>=90&& marks<=100){
        cout<<"Excellent";
    }

return 0;
}