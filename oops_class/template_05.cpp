//template using class and call class 
#include<iostream>
using namespace std;
#include<iomanip>
template<class t>
class a{
    public:
    t num1;
    t num2;
    void add(){
        cin>>num1>>num2;
        cout<<"the sum of two number : "<<num1+num2<<endl;
    }
};
int main(){
    a<int>x;
    a<float>x1;
    cout<<"INT NUMBER   : "<<endl;
    x.add();
    cout<<" FLOAT NUMBER   : "<<endl;
    x1.add();
    return 0 ;
}