
//  Header file : 
// 1) system header file #include<iostream> 
// 2) User  defined file  #include<"user will write it">

#include<iostream>
using namespace std;

int main(){
    //int a = 44 , b = 22;
    //algebric operator 
    int a ,b;
    cout<<"enter the value a : "<<endl;
    cin>>a;
    cout<<"enter the value b : "<<endl;
    cin>>b;

    cout<<"the value of a + b is : "<< a + b<<endl;
    cout<<"the value of a - b is : "<< a - b<<endl;
    cout<<"the value of a * b is : "<< a * b<<endl;
    cout<<"the value of a / b is : "<< a / b<<endl;
    cout<<"the value of a % b is : "<< a % b<<endl;
    cout<<"the value of a ++ is : "<< a ++ <<endl; // first a print then add
    cout<<"the value of a -- is : "<< a -- <<endl; // first a print then sub 
    cout<<"the value of ++ a is : "<< ++a <<endl; // first add and then print 
    cout<<"the value of -- a is : "<<--a <<endl;  // first sub and then print

    return 0;
}

