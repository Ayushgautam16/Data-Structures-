#include<iostream>
using namespace std;


void printPyramid(int n){
    for (int i = 0; i < n; i++)
    {
        // space 
        for(int j=0;j<=n-i-1;j++){
                cout<<" ";     
        }
       
         //   star 
        for(int j=0;j<=2*i+1;j++){
                cout<<"*";     
        }

         // space 
        for(int j=0;j<=n-i-1;j++){
                cout<<" "; 
        }}}


void printReversePyramid(int n){
    for (int i = 1; i < n; i++)
    {

      // space 
        for(int j=0;j<=i;j++){
                cout<<" ";     
        }
       
         //   star 
        for(int j=0;j<=2*n-(2*i+1);j++){
                cout<<"*";     
        }

         // space 
        for(int j=0;j<=i;j++){
                cout<<" "; 

        
    }
    cout<<endl;

    
}
}

int main(){

    int n;
    cout<<"enter the value: ";
    cin>>n;
    printPyramid(n);
    printReversePyramid (n);



return 0;
}