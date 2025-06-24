#include<iostream>
using namespace std;

void printstars(int n ){
    for(int i = 1; i<=2*n-1; i++){
        int stars =1;
        if(i>n) stars =2*n-i;
        for(int j=0; j<=stars;j++){
            cout<<"*";
        }
    }}
int main(){
       int n;
    cout<<"enter the value: ";
    cin>>n;
    printstars (n);


    }