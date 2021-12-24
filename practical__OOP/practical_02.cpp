//2) write a  program to find the largest of three element
#include<iostream>
using namespace std;
#include<iomanip>

int main(){
    int m,n,o;
    cout<<"enter the first element : \n";
    cin>>m;
    cout<<"enter the second element : \n";
    cin>>n;
    cout<<"enter the third element : \n";
    cin>>o;
    if (m>n && m>o)  
    {
        cout<<"the largest element is : "<<m;
    }
    else if (n>o && n>m)
    {
        cout<<"the largest element is : "<<n;
    }
    
    else
    {
        cout<<"the largest element is : "<<o;
    }
    
    
    return 0 ;
}