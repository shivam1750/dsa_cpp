//  limitation of bidirection operator 
#include<iostream>
using namespace std;
#include<iomanip>
#include<vector>
#include<iterator>
int main(){
    vector<int>v{1,2,3,4,5,6};
    vector<int>v1{1,2,3,4,5,6};
    vector<int>::iterator itr,itr1;
    
    for (itr = v.begin();itr!=v.end(); itr++)
    {
        cout<<*itr<<"   ";
    }
    cout<<endl;
    for (itr1 = v1.begin();itr1!=v1.end(); itr1++)
    {
        cout<<*itr1<<"   ";
    }
    if(itr == itr1){
        cout<<"both the iterator are equal : "<<endl;
    }
    else{
        cout<<"both the iterator are  NOT equal : "<<endl;
    }
    return 0 ;
}