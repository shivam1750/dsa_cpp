//exception thrown by funciton 
#include<iostream>
using namespace std;
#include<iomanip>
void divide (int  x, int y , int z){
    if((x-y)!=0){
        int r= z/(x-y);
        cout<<"result z/(x-y)= "<<r<<endl;
    }
    else
    {
        throw(x-y);
    }
    
}
int main(){
    try
    {
        divide(10,20,30);
        divide(10,10,20);
    }
    catch(int i)
    {
        cout<<"exception caught "<<endl;
    }
    
    return 0 ;
}