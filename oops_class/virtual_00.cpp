/*
//without using virtual keyword 
#include<iostream>
using namespace std;
#include<iomanip>
class a{
    public:
    void display(){
        cout<<"\n BASE CLASS FUNCTION ";
    }
};
class b : public a{
    public:
    void display(){
        cout<<"\n DERIVED CLASS FUNCTION ";
    }
};
int main(){
    a *x;
    b y;
    x=&y;
    x->display();
    return 0 ;
}
*/

//using virtual keyword (NOTE  = Virtual keyword is use only in base class )
/*
//01
#include<iostream>
using namespace std;
#include<iomanip>
class a{
    public:
    virtual void display(){
        cout<<"\n BASE CLASS FUNCTION ";
    }
};
class b : public a{
    public:
    void display(){
        cout<<"\n DERIVED CLASS FUNCTION ";
    }
};
int main(){
    a *x;
    b y;
    x=&y;
    x->display();
    return 0 ;
}
*/
/*
//02
#include<iostream>
using namespace std;
#include<iomanip>
class a{
    public:
    virtual void display(){
        cout<<"\n BASE CLASS FUNCTION ";
    }
};
class b : public a{
    public:
    void display(){
        cout<<"\n DERIVED CLASS FUNCTION ";
    }
};
int main(){
    a a1;
    a *a2;
    a2=&a1;
    a2->display();

    b b2;
    a2=&b2;
    a2->display();
    return 0 ;
}
*/

//using pure virtual keyword (by using Abstract class)
//01  (NOTE : virtual key word also access the private member variable and function  )
#include<iostream>
using namespace std;
#include<iomanip>
class a{
    virtual void display1()=0;     //or also in the formate // public:
    public:                        //                           virtual void display1()=0; 
    virtual void display2(){        //
        cout<<"\n BASE CLASS FUNCTION ";
    }
};
class b : public a{
    public:
    void display1(){
        cout<<"\n BASE CLASS FUNCTION ";
    }
    void display3(){
        cout<<"\n DERIVED CLASS FUNCTION ";
    }
};
int main(){
    b b1;
    b1.display1();
    b1.display2();
    b1.display3();
    return 0 ;
}