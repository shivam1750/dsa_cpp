//capacity function in vector by get illustrate the cpp languages 
#include<iostream>
#include<iterator>
#include<vector>
#include<iomanip>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n ;
    //insert 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout<<" the last element is : "<< v[n-1]<<endl;

    //erases the vector 
    v.clear();
    cout<<"vector  size after erases () : "<<v.size()<<endl;

    //two vector to perform swap 
    vector<int> v1,v2;
    v1.push_back(1);
    v1.push_back(2);

    v2.push_back(3);
    v2.push_back(4);

    cout<<"vector 1 : "<<endl;
    for (int i = 0; i <v1.size(); i++)
    {
        cout<<v1[i]<<"  ";
    }
    cout<<endl<<"vector 2 : "<<endl;
    for (int i = 0; i <v2.size(); i++)
    {
        cout<<v2[i]<<"  ";
    }
    //SWAP V1 & V2  
    v1.swap(v2);
    cout<<endl<<"new vector 1 by consist the swaping  is   : "<<endl;
    for (int i = 0; i <v1.size(); i++)
    {
        cout<<v1[i]<<"  ";
    }
    return 0;
}