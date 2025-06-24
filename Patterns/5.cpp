#include<iostream>
using namespace std;


// heare we need the three things such as ------> 

// outer loop for the rows   ------->1

// space                     ------->2
// n-i-1

// star                      ------->3
// 2i+1

// space again               ------->4
// n-i-1

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

        
    }
    cout<<endl;

    
}
}

int main(){

    int n;
    cout<<"enter the value: ";
    cin>>n;
    printPyramid (n);



return 0;
}


// enter the value: 10
//           **
//          ****
//         ******        
//        ********
//       **********
//      ************     
//     **************
//    ****************   
//   ******************
//  ********************