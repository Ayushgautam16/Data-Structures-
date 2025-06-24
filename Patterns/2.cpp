#include<iostream>
using namespace std;

void printStar(int n){
    for(int i=0;i<n;i++){
    for(int  j=0 ;j<i;j++){
        cout<<"*";

    }
    cout<<endl;
}
}

int main(){
      int n;
    cout<<"enter the num u wanted to print the star: ";
    cin>>n;
    printStar(n);


return 0;
}


o/p----->
*
**
***
****