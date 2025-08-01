#include<bits/stdc++.h>
using namespace std;

void printnum(int i , int n){
    if(i>n)
    return ;
    cout<<(i);
    printnum(i+1,n);

}
int main(){
    int n;
    cout<<("enter the value till u want to iterate: ");
    cin>>(n);
    printnum(1, n);

return 0;
}


 // output :-
// enter the value till u want to iterate: 6
// 123456