// #include<iostream>
// using namespace std;

// void printNumber(int n )
// {
//     for(int i =0;i<=n ; i++){
//         for(int j=0;j<=i ; j++){
//             cout<< j<<" ";
//         }
//         cout<<endl;
//     }

// }
// int main(){

// int n;
// cout<<"enter the value: ";
// cin>>n;
// printNumber(n);

// return 0;
// }

// 0 
// 0 1
// 0 1 2
// 0 1 2 3
// 0 1 2 3 4
// 0 1 2 3 4 5 
// 0 1 2 3 4 5 6
// 0 1 2 3 4 5 6 7
// 0 1 2 3 4 5 6 7 8
// 0 1 2 3 4 5 6 7 8 9 
// 0 1 2 3 4 5 6 7 8 9 10



#include<iostream>
using namespace std;

void printNumber(int n )
{
    for(int i =0;i<=n ; i++){
        for(int j=0;j<=i ; j++){
            cout<< i<<" ";
        }
        cout<<endl;
    }

}
int main(){

int n;
cout<<"enter the value: ";
cin>>n;
printNumber(n);

return 0;
}




// agar j ki jagah i kardiya to ye hoga 

0 
1 1
2 2 2
3 3 3 3
4 4 4 4 4
5 5 5 5 5 5
6 6 6 6 6 6 6
7 7 7 7 7 7 7 7 
8 8 8 8 8 8 8 8 8
9 9 9 9 9 9 9 9 9 9
10 10 10 10 10 10 10 10 10 10 10 