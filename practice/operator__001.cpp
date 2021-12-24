#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    int a,b,c,d;
    cout<<"enter the a no.: "<<endl;
    cin>>a;
    
    cout<<"enter the b no.: "<<endl;
    cin>>b;
    
    cout<<"enter the c no.: "<<endl;
    cin>>c;
   
    cout<<"enter the d no.: "<<endl;
    cin>>d;

    cout<<"thevalue of a++ before using operator "<<a<<endl;
    cout<<"the value of a ++ is : "<< a ++ <<endl; 

    cout<<"thevalue of b-- before using operator "<<b<<endl;
    cout<<"the value of b-- is : "<< b -- <<endl;  

    cout<<"thevalue of ++c before using operator "<<c<<endl;
    cout<<"the value of ++c is : "<< ++c <<endl; 

    cout<<"thevalue of --d before using operator "<<d<<endl;
    cout<<"the value of -- d is : "<<--d <<endl; 

    return 0 ;
}