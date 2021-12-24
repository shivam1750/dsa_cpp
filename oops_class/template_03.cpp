//function template with a function overloading 
#include<iostream>
using namespace std;
#include<iomanip>
template <class a> 
void fun(a x){
    cout<<"value of x is : "<<x<<endl;
}
template <class a , class b > 
void fun(a x , b y){
    cout<<"value of x is : "<<x<<endl;
    cout<<"value of y is : "<<y<<endl;
    float result =( x + y);
    cout<<"sum of x & y is : "<<result<<endl;
}
int main(){
    int x;
    float y ;
    cout<<"enter the int number : ";
    cin>>x;
    cout<<"enter the float number : ";
    cin>>y;
    
    fun(x);
    fun(x,y);

    return 0 ;
}