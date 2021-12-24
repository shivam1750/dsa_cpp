//1) write a  program to find the largest of two element
#include<iostream>
using namespace std;

int main(){
    float m,n;
    cout<<"Enter the first element :  \n";
    cin>>m;
    cout<<"Enter the second element : \n";
    cin>>n;
    if (m>n)
    {
        cout<<"the largest element is : "<<m;
    }
    else
    {
        cout<<"the largest element is : "<<n;
    }
    return 0 ;
}

