//reverse iterator by using vector 
#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(){
    vector<int>v{1,2,3,4,5,6};  //declaration of vector
    vector<int>::iterator itr;  //iterator of declaration
    vector<int>::reverse_iterator ritr ;    //reverse iterator of declaration

    for (itr = v.begin();itr!=v.end(); itr++)
    {
        cout<<*itr<<"   ";
    }
    cout<<endl;
    for (ritr = v.rbegin();ritr!=v.rend(); ritr++)
    {
        cout<<*ritr<<"   ";
    }
    cout<<endl;

    v.insert(v.begin()+2,100);      // insert at begin
    for (ritr = v.rbegin();ritr!=v.rend(); ritr++)
    {
        cout<<*ritr<<"   ";
    }
    return 0;
}
