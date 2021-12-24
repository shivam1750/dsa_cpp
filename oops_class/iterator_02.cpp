#include<iostream> 
#include<iomanip>
#include<vector>
#include<iterator>
using namespace std;
int main (){
    vector<int>v{1,2,3,4,5};
    vector<int>::iterator itr;
    for (int i = 0; i <5; i++) //traversal without using iterator 
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for (itr=v.begin();itr!=v.end();itr ++ )
    {
        cout<<*itr<<" ";     //traversal using interator  
    }
    
    cout<<endl<<"    ***********  "<<endl;

    v.push_back(10);      // push_back = function is only access by iterator 
    cout<<endl;
    for (int i = 0; i <5; i++) //traversal without using iterator 
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for (itr=v.begin();itr!=v.end();itr ++ )
    {
        cout<<*itr<<" ";     //traversal using interator  
    }
    
    return 0;
}