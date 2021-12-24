//exception handling with multiple catch statement 
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
    catch(char c){
        cout<<"caught the character "<<endl;
    }
    catch(int m){
        cout<<"caught the integer "<<endl;
    }
    catch(double d){
        cout<<"caught the double "<<endl;
    }
    
    cout<<" End of try catch block "<<endl;
    
}
int main(){
    cout<<" x = 1 "<<endl;
    test(1);
    cout<<" x = 0 "<<endl;
    test(0);
    cout<<" x = -1 "<<endl;
    test(-1);
    cout<<" x = 2 "<<endl;
    test(2);
    return 0 ;
}