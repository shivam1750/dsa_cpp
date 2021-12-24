#include<iostream>
using namespace std;
#include<iomanip>
class base{
    public:
    void show(){
        cout<<"base class \n";
    }
};
class derived : public base{
    public:
    void show(){
        cout<<"derived  class \n";
    }

};
int main(){
    //derived a;
    //a.base::show();
    base *b;
    derived d;
    b=&d;
    b->show();
    

    return 0 ;
}