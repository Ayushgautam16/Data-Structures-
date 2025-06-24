#include<iostream>
using namespace std;

void printStar(int n ){
  for(int i=0;i<n;i++){
    for(int  j=0 ;j<n;j++){
        cout<<"*";

    }
    cout<<endl;
    }
}
// this is for the test case in the backend looks like in the online compiler 
int main(){
    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        int n;
        cin>>n;
        printStar(n);
    }

return 0;
}


// o/p------> 
// 2 5 7
// *****
// *****
// *****
// *****
// *****
// *******
// *******
// *******
// *******
// *******
// *******
// *******