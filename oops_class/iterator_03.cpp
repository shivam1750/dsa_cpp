//insertion in vector by using iterator 
#include<iostream>
#include<iomanip>
#include<vector>
#include<iterator>
using namespace std ;
int main(){
    vector<int>v{1,2,3,4,5};
    vector<int>::iterator itr ; 
    v.insert(v.begin()+2,10);
    //v.insert(v.end()-2,10);
    
    for (itr=v.begin();itr!=v.end();itr ++ )
    {
        cout<<*itr<<" ";     //traversal using interator  
    }
    return 1 ;
}