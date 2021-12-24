#include<iostream>

#include<vector>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>vec{1,2,3,4,5};
    //this increases all the values in the vector by 1 
    for_each(vec.begin(),vec.end(),[](int& a){a++ ;});

    //this print all the values in the vector 
    for_each(vec.begin(),vec.end(),[](int a ){
        cout<< a<<" "<<endl ;
    });
    return 0;
}