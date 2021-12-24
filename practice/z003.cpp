#include<iostream>
using namespace std;
#include<iomanip>

int display(int );
int main()
{
    int  x; 
    cout<<"enter the no. x : \n";
    cin>>x;
    display(x);

    return 0;
}
int display(int y)
{
    
    cout<<"square of x : "<<y*y;
    return 0 ;
    
    
}