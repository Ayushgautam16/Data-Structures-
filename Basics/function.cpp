    // void function 
    // return function 
    // parametrised 
    // non parametrised 


#include<iostream>
using namespace std;

void Naam_print_nikarega(){
    cout<<"ni karunga print me ";

    // here in this form void is function does not give me anything but it can do something
}

void Naam_print_karega(string name){
     cout<<"hey Ayush!"<<" "<<name;
}

int sum(int n1,int n2){
    int num3 = n1 + n2;
    return num3;

    // yahan karra hu return ka use is liye me return kar ra hu 
}



int main(){

// 1st wala function 
    Naam_print_nikarega();

// 2nd wala function 
    string name;
    cin>> name;
    Naam_print_karega(name);
  
// 3rd wala function 
int n1, n2;
cin>> n1>>n2;
int res =sum(n1,n2);
cout <<res;


return 0;
}