//05) Write a program to check whether a given number is prime or not using pointers
#include<iostream>
using namespace std;
#include<iomanip>

int *prime(int &a){
    int b =0;
    b= a/2;
    bool prime = true;
    for (int i = 2; i <=b; i++)
    {
        if (a %i==0)
        {
            cout<<"not prime";
            prime = false;
            break;
        }
        
    }
    if (prime == true)
    {
        cout<<"prime";
    }
    return 0;
}
int main(){
    int a;
    cout<<"enter the value of a : "<<endl;
    cin>>a;
    *prime(a);
    return 0 ;
}