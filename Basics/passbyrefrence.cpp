// pass by refrence to get the original value by hte address


#include <iostream>
using namespace std;
void dosomething(int &num){
    cout<<num <<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;

}

int main(){
    int num = 10;
  dosomething(num);
    cout << num <<endl;
return 0;

// 10
// 15
// 20
// 20
}