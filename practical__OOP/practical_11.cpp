//demonstration of a call by value and call by reference function for calculating square of a given number.
#include<iostream>
using namespace std;
#include<iomanip>
void call(int x)     
{                        
    x = x*x;
    cout<<"by Call By Value: "<<x<<endl;
}

void call_(int &x)     
{                        
    x = x*x;
    cout<<"by Call By Reference: "<<x<<endl;
}

int main()
{
    int x;
    cout<<"Enter the number : "<<endl;
    cin>>x;
    call(x);
    cout<<"The original value of a after call by value: "<<x<<endl;
    call_(x);
    cout<<"The original value of a after call by reference: "<<x<<endl;

    return 0 ; 
}