#include<iostream>
using namespace std;
#include<iomanip>

// returm value key 
int sum(int a, int b){

    // a , b demo parameter 
    int c = a + b;
    return c;
}
int main(){
    int num1 , num2 ;
    cout<<"enter the first number : "<<endl;
    cin>>num1;

    cout<< " enter the second number : "<<endl;
    cin>>num2;

    // num1 , num2 is actual parameter
    cout<<" the sum of two number is : "<<sum(num1,num2);
    
    return 0 ;
}