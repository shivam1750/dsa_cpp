// 04) Write a program to find largest of two numbers using pointers
#include <iostream>
using namespace std;
int *max(int &x,int &y)
{
    if(x>y)
        return(&x);
    else
        return(&y);
}
int main()
{
    int num1,num2,*p;
    cout<<"Enter value of num1 ";
    cin>>num1;
    cout<<"Enter valule of num2 ";
    cin>>num2;
    p=max(num1,num2);
    cout<<"\nmaximum of two numbers is "<<*p <<endl;
    return 0;
}