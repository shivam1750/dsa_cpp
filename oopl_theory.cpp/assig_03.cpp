// 03) Write a program to swap two numbers using pointers
#include<iostream>
using namespace std;
#include<iomanip>

void swap(int *m , int *n){
    int temp = *m;
    *m=*n;
    *n=temp;
}
int main(){ 
    int a, b ;
    cout<<"enter the value os a and b : "<<endl;
    cin>>a>>b;

    cout<<"before value of swaping using pointer is a = "<<a<<" and b = "<<b<<endl;
    swap(&a,&b);

    cout<<"after value of swaping using pointer is a = "<<a<<" and b = "<<b<<endl;
    
    return 0 ;
}