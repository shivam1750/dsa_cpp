// minus (-) operator overloading 
#include<iostream>
using namespace std;
#include<iomanip>
class example {
    int a, b;
    public:
    void input(){
        cout<<"enter a and b : "<<endl;
        cin>>a>>b;
    }
    void operator-(){
        a = -a;
        b= -b;
    }
    void display(){
        cout<<"A = "<<a<<endl<<"b="<<b<<endl;
    }
};
int main(){
    example e;
    e.input();
    cout<<"before overloading unary minus operator : "<<endl;
    e.display();

    //-e;
    cout<<"after overloading unary minus operator : "<<endl;
    e.operator-();
    e.display();
    return 0 ;
}