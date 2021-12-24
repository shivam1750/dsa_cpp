//exception handling with ALL catch statement 
#include<iostream>
using namespace std;
#include<iomanip>
void test(int x){
    try{
        if(x==1){
            throw x;
        }
        if(x==0){
            throw 'x';
        }
        if(x==-1){
            throw 1.0;
        }
        cout<<"end of try block "<<endl;
    }
    catch(...){
        cout<<"caught an exception "<<endl;
    }
    
    cout<<" End of try catch block "<<endl;
    
}
int main(){
    cout<<" x = 1 "<<endl;
    test(1);
    cout<<"*********************"<<endl;
    cout<<" x = 0 "<<endl;
    test(0);
    cout<<"*********************"<<endl;
    cout<<" x = -1 "<<endl;
    test(-1);
    cout<<"*********************"<<endl;
    cout<<" x = 2 "<<endl;
    test(2);
    cout<<"*********************"<<endl;
    return 0 ;
}