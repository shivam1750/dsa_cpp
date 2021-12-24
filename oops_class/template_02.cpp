//function template with a multiple parameter 
#include<iostream>
using namespace std;
#include<iomanip>
template<class x, class y>
void fun(x a, y b){
    cout<<"value of int is : "<<a<<endl;
    cout<<"value of float is : "<<b<<endl;
}
int main(){
    int a;
    float b ;
    cout<<"enter the int number : ";
    cin>>a;
    cout<<"enter the float number : ";
    cin>>b;
    fun(a,b);
    
    return 0 ;

}