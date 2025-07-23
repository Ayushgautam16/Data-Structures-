// #include<bits/stdc++.h>
// using namespace std;

// void explainPairs(){
//     pair<int,int> p ={1,3};
//     cout<<p.first<<" "<<p.second<<endl;

//     pair<int,pair<int,int>> s= {1,{3,4}};
//     cout<<s.first<<" "<<s.second.second<<" "<< s.second.first<<endl;

//     pair<int,int>arr[]= {{1,2},{2,5},{5,2}};
//     cout<<arr[1].second<<endl;
// }
// int main(){

//     explainPairs();
// return 0;
// }


// op---->
// 1 3
// 1 4 3
// 5


#include<bits/stdc++.h>
using namespace std;
int main(){
// pair<int, string> p;

// 2 tareeka hai refrence ke liye
// p.first = 3;
// p =make_pair(2,"abc");

// p= {2,"abs"};
pair<int,string> &p1=p;
p1.first =3;
cout<<p.first<<" "<<p.second<<endl;


// int a[]={1,23,4};
int b[]={1,23,4};

pair<int,int> p_array[3];
 p_array[3] ={1,2};
 p_array[3] ={1,2};
 p_array[3] ={1,2};
 p_array[3] ={1,2};
 

return 0;
}