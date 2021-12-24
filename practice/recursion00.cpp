#include<iostream>
using namespace std;
#include<iomanip>

int factorial(int n){
    if (n<=1)
    {
        return 1;
    }
    return n* factorial(n-1);
}

int main(){
    int a;

    cout<<"enter the number"<<endl;
    cin>>a;
    cout<<"enter factorial "<<a<<" is : "<<factorial(a);

    return 0 ;
}