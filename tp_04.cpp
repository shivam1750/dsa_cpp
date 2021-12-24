#include<iostream>
using namespace std;
#include<iomanip>
class x{
    public:
    void b(){
        cout<<"hi ";
    }
};
class y:public x{
    public:
    void b(){
        cout<<"\nshivam ";
    }
};
int main(){
    y a;
    a.x::b();
    a.b();
    return 0 ;
}