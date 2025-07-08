#include<bits/stdc++.h>
using namespace std;


// vector<int> v;	            Empty vector
// v.push_back(x);          	Add element at end
// v.emplace_b ack(x);	   Add element at end (faster)
// vector<int> v(5);	        Size 5, all 0
// vector<int> v(5, 100);	     Size 5, all 100
// vector<pair<int,int>> vec;	    Vector of pairs
// vec.emplace_back(a,b);	       Add pair (a,b)
// vector<int> v2(v1);	           Copy vector



void explainvector(){
     
    // vector<int> v;
// Creates an empty vector of int.
// You can now use push_back to add elements.
    // v.push_back(1);
    // v.push_back(2);

// v = {1, 2}

    // v.emplace_back(4);

//     Also adds 4 at the end — but more efficient than push_back.
// Internally constructs the element in place.
// // v = {1, 2, 4}

// ************emplace_back() is like a faster version of push_back().**************


//  vector<pair<int, int>> vec;
// Declares a vector that stores pairs of integers.


    // vector<pair<int,int>>vec;
    // vec.emplace_back(1,5);
// vec.emplace_back(1, 5); 

// valid for vector<pair<int,int>>

    // vector<int> v(5,100)
// Creates a vector v with 5 elements, all initialized to 100.
// // v = {100, 100, 100, 100, 100}

    vector<int> v(5);
    // Creates a vector of size 5, but default-initialized with 0s.




    vector<int>v(5,20);

    // Creates a vector with 5 elements all set to 20.
// v = {20, 20, 20, 20, 20}


}


int main(){

    explainvector();

vector<int>::iterator it = v.begin();
it++;
cout<<*(it)
<<" ";
return 0;
}