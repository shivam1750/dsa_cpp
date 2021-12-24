//exception handling with re-throwing an exception 
#include<iostream>
using namespace std;
#include<iomanip>
void divide(double x , double y){
    cout<<" inside function  "<<endl;
    try{
        if(y==0.0)
            throw y;
        
        else
            cout<<"division = "<<(x/y)<<endl;
            cout<<endl;

    } 
    catch(double){
        cout<<"caught double inside DIVIDE function "<<endl;
        throw;
    }
    cout<<"end of function "<<endl;
    cout<<endl;
}
int main(){
    cout<<"inside the main function "<<endl;

    try
    {
        divide(10.5,2.0);
        divide(20.0,0.0);
    }

    catch(double){
        cout<<"caught double inside  MAIN function"<<endl;
    }
    cout<<endl;
    cout<<"end of main "<<endl;
    return 0 ;
}