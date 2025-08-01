// recursion :- when function calls itselfuntil specified conditiom is met.

#include<bits/stdc++.h>
using namespace std;
void df(int i,int n){

        if(i>n)
        return;
        cout<<("ayush\n" );
        df(i+1, n);
    
}

int main(){
int n;
df(1,3);

return 0;
}


// output 
// ayush
// ayush
// ayush