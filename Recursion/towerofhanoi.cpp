#include<bits/stdc++.h>
using namespace std;
void toh(int n, char source, char dest, char aux){
    if(n==1)
    cout<<("%c-->%c\n",source, dest);
    else{
        toh(n-1, source,aux, dest);
        cout<<("%c-->%c\n", source, dest);
        toh(n-1, aux, dest, source);

    }
}

int main(){
int n;
cout<<("enter the number of rings: ");
cin>>(n);
toh(n, 'A', 'C','B');
return 0;
}