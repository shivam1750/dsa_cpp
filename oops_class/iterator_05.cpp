
#include<iostream>
#include<iomanip>
#include<iterator>
#include<vector>
using namespace std;
template<class forwarditerator>     ///function template 
void display(forwarditerator first , forwarditerator last )     //display function 
{
    while (first!=last)
    {
        cout<<*first<<" ";              //input iterator
        first++;
    }
    
}
int main(){
    vector <int> a; //declaration vector
    for (int i = 1; i <= 10; i++)       //output iterator
    {   
        a.push_back(i);          //push_back == is use to add element from last positions
    }
    display(a.begin(),a.end());

    cout<<endl;
    a.pop_back();               //pop_back == is use to remove last element
    display(a.begin(),a.end());
    return 0 ;
}