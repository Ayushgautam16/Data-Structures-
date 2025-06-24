// for the reverse formula is n-i+1

// #include<iostream>
// using namespace std;

// void printReverse(int n){
//     for(int i =1; i<=n; i++){
//         for(int j=0; j<+n-i+1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;


//     }
// }

// int main(){
//     int n;
// cout<<"enter the value: ";
// cin>>n;
// printReverse(n);


// return 0;
// }

// * * * * * * * * * * 
// * * * * * * * * * 
// * * * * * * * *
// * * * * * * *
// * * * * * *
// * * * * *
// * * * *
// * * *
// * *
// * 



//  #include<iostream>
// using namespace std;

// void printReverse(int n){
//     for(int i =1; i<=n; i++){
//         for(int j=0; j<+n-i+1;j++){
//             cout<<i;
//         }
//         cout<<endl;


//     }
// }

// int main(){
//     int n;
// cout<<"enter the value: ";
// cin>>n;
// printReverse(n);


// return 0;
// }

// 1111111111
// 222222222
// 33333333
// 4444444
// 555555
// 66666
// 7777
// 888
// 99
// 10



 #include<iostream>
using namespace std;

void printReverse(int n){
    for(int i =1; i<=n; i++){
        for(int j=0; j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;


    }
}

int main(){
    int n;
cout<<"enter the value: ";
cin>>n;
printReverse(n);


return 0;
}

// enter the value: 10
// 012345678910
// 0123456789
// 012345678
// 01234567
// 0123456
// 012345
// 01234
// 0123
// 012
// 01