#include<iostream>
using namespace std;
#include<iomanip>

// --- Function Prototypes -- 
// type of function-name (arguments);
//int sum(int a , int b); -- > acceptable
//int sum(int a , b);  ----> unacceptable
//int sum(int  , int );   ---> acceptable

int sum(int a , int b);
void g(void); // -- > acceptable
//void g();  -- > acceptable

int main(){
    int num1 , num2 ;
    cout<<" enter the first number : "<<endl;
    cin>>num1;

    cout<< " enter the second number : "<<endl;
    cin>>num2;

    cout<<" the sum of two number is : "<<sum(num1,num2);
    
    g();
    return 0 ;
}

int sum(int a, int b){
    int c = a+ b;
    return c;
}

void g()
{
    cout<< " \n hlw , good night "<<endl;
} 