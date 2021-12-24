//write a program to find factorial of given number using recursive function 
#include<iostream>
using namespace std;
#include<iomanip>
int factorial(int );

int main(){
    int a;

    cout<<"enter the number"<<endl;
    cin>>a;
    cout<<"enter factorial "<<a<<" is : "<<factorial(a);

    return 0 ;
}
int factorial(int n){
    if (n<=1)
    {
        return 1;
    }
    return n* factorial(n-1);
}
