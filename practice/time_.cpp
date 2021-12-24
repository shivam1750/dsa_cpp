#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    bool prime = true;
    int a;
    int b =0;
    cin>>a;
    b=a/2;
    
    for (int i = 2; i <=b; i++)
    {
        if (a%i==0)
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
    
    
    return 0 ;
}