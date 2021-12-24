//4) Write a program to find the sum of elements of an arrays 
#include<iostream>
using namespace std;
#include<iomanip>

int main(){
    int arr_[5];
    
    cout<<"enter the 5 element : "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr_[i];
    }
  
    cout<<"the sum of the element is : "<<(arr_[0]+arr_[1]+arr_[2]+arr_[3]+arr_[4]);
    return 0 ;
}