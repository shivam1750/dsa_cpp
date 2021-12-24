#include<iostream>
using namespace std;
#include<iomanip>
/*
void swap(int a , int b, int p){
    p = a;
    a = b;
    b = p;
}
*/

int main(){
    int a , b ;
    cout<< "enter the value of a : "<<endl;
    cin>>a;
    cout<< "enter the value of b : "<<endl;
    cin>>b;

    cout<<"the value of x and y before swap is : "<<a<<"  "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    //swap(a,b);
    cout<<"the value of x and y after swap is : "<<a<<"  "<<b<<endl;

    return 0;

}

