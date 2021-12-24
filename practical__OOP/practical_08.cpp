//8)  write down the problem state ment we have take two input from user asa operator using switch case do +.-.*,/
#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    float x, y  ;
    cout<<"enter the first number: "<<endl;
    cin>>x;
    cout<<"enter the second number: "<<endl;
    cin>>y;
    char o;
    cout<<"Enter the operator : + , - , * , / "<<endl;
    cin>>o;
    switch (o){
    case '+':
        cout<<"The addition of two number is : "<<(x+y)<<endl;
        break;
    case '-':
        cout<<"The addition of two number is : "<<(x-y)<<endl;
        break;
    case '*':
        cout<<"The addition of two number is : "<<(x*y)<<endl;
        break;
    case '/':
        cout<<"The addition of two number is : "<<(x/y)<<endl;
        break;

    default:
        cout<<"Invaild option : Try Again";
        break;    
    }
    return 0 ;
}

