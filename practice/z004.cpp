#include <iostream>
using namespace std;
 
 class Complex
{
float real;
float imag;
 
    public:
    Complex()
    {
     real=0;
     imag=0;
         
    }
    void input()
    {
        cout<<"Enter Real part";
        cin>>real;
        cout<<"Enter Imaginary part";
        cin>>imag;
    }
    void output()
    {
        if(imag<0){
            cout<<"\nComplex no is "<< real<<imag<<"i";}
        else
            cout<<"\n Complex no is "<<real<<"+"<<imag <<"i";
    }
    Complex operator + (Complex c2)
    {
        Complex temp;
        temp.real= real+c2.real;
        temp.imag=imag+c2.imag;
        return temp;
    }
    Complex operator * (Complex c2)
    {
     Complex temp;
      temp.real=(real*c2.real)-(imag*c2.imag);
      temp.imag=(real*c2.imag)+(imag*c2.real);
      return temp;
    }
    friend ostream& operator<<(ostream &out, Complex &c);
    friend istream& operator>>(istream& in , Complex&c);
 //overloading'<<'operatorfriend istream & operator  >>(istream &in, complex &c);
 //overloading'>>' operator;
};
 


ostream& operator<<(ostream&out, Complex&c) //operator function
{
    cout<<c.real<<"+"<<c.imag<<"i";
    return out;
}
istream& operator>>(istream& in , Complex&c)
 //operator function
{
    in>>c.real;
    in>>c.imag;
    return in;
}


int main()
{
    Complex c1,c2,result;
    int ch;
    c1.input();
    c2.input();
    cout<<"\n1.Addition 2.Multiplication 3.read and print case 4 Exit";
    cout<<"\nEnter choice";
    cin>>ch;
switch(ch)
{
    case 1:
        result=c1+c2;
        result.output();
        break;
    case 2:
        result=c1*c2;
        result.output();
        break;
    case 3:
        cout<<"Reading the complex number.\n";
        cin>>c1;
        cout<<"Printing the complex number.\n";
        cout<<c1;
    break;
    default:
        break;

 }
        

    while(ch!=0);
    return 0;
}