//iterator
#include<iostream>
using namespace std;
#include<iomanip>
#include<iterator>
#include<vector>
int main(){
    vector<int>v{1,2,3,4,5,6};
    vector<int>::iterator itr;
    for (itr=v.begin(); itr!=v.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    
    return 0 ;
}