#include<iostream>
using namespace std;

int c = 100; // global variable 

int main(){
    int a,b,c ;
    cout<<"enter the first number : \n"; 
    cin>>a;             

    cout<<"enter the second number : \n";
    cin>>b;
    
    c = a+b;
    cout<<"the sum of the two number is :"<<c<<endl;          // LOCAL VARIABLE 

    cout<<"the global variable is :"<<::c;   // NOTE ==> to acces global variable use :: 
    return 0;                                              
}