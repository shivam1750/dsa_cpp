//cpp program to illustrate the iterator in vector

#include<iostream>
using namespace std;
#include<iomanip>
#include<vector>

int main(){
    vector<int>g1;
    for (int  i = 1; i <= 5 ; i++){
        g1.push_back(i);        //push_back == add the element 
    }
    cout<<" output of begin and end : "<<endl;
    for (auto i =g1.begin() ; i!= g1.end(); ++i)
    {
        cout<<*i<<"  ";
    }
    cout<<"\n output of cbegin and cend : "<<endl;
    for (auto i =g1.cbegin() ; i!= g1.cend(); ++i)      //cbegin == constant iterator 
    {
        cout<<*i<<"  ";
    }
    cout<<"\n output of rbegin and rend : "<<endl;
    for (auto i =g1.rbegin() ; i!= g1.rend(); ++i)      //rbegin == reverse iterator 
    {
        cout<<*i<<"  ";                                 
    }
    cout<<"\n output of crbegin and crend : "<<endl;
    for (auto i =g1.crbegin() ; i!= g1.crend(); ++i)      //crbegin == constant reverse iterator 
    {
        cout<<*i<<"  ";                                 
    }
    return 0 ;
}