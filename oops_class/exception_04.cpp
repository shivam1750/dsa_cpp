#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    int a,b;
    cout<<"enter  the two number : "<<endl;
    cin>>a>>b;
    int x = a-b;
    try
    {
        if(x!=0){
            cout<<"result a/x = "<<(a/x)<<endl;
        }
        else{
            throw x;
        }
    }
    catch(const int i)
    {
        cout<<"exception caught x = "<<x<<endl;
            }
    
    return 0 ;
}