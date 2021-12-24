/*                          // QUESTION 1 //
Implement a class complex which represents the complex number data type. implement the
following:
1)constructor (including a default constructor which create the complex number 0+0i)
2)Overload operator+ to add two complex number 
3)Overload operator* to multiply two complex number
4)Overload operator<< and >>to print and read complex number.
*/

#include<iostream>
using namespace std;
#include<iomanip>
class complex
{
private:
    float real , imag;
public:
    //1
    complex(){
        real=0;             
        imag=0; 
    }
    void input(){
        cout<<"enter the real no. and imag no. : \n";
        cin>>real>>imag;
    }
    void output(){
        if(imag<0){        
            cout<<"compelx no. is "<<real<<imag<<"i";  
        }
        else
        {
            cout<<"compelx no. is : "<<real<<"+"<<imag<<"i";
        }
        
    }
    //2
    complex operator+(complex c1){     
        complex temp;
        temp.real=real+c1.real; 
        temp.imag=imag+c1.imag;   
        return temp; 
    }
    //3
    complex operator*(complex c2){ 
        complex temp;  
        temp.real=(real*c2.real)-(imag*c2.imag); 
        temp.imag=(real*c2.imag)+(imag*c2.real);    
        return temp; 
    }
    //4
    friend ostream&operator<<(ostream&out,complex &c);//function declaration
    friend istream&operator>>(istream&in,complex &c);

};

ostream& operator <<(ostream&out,complex &c) // function definiation
{
    out<<c.real<<"+"<<c.imag<<"i";
    return out;
}
istream& operator >>(istream&in,complex &c) // function definiation
{
    in>>c.real;
        in>>c.imag;
    return in;

}

int main(){
    complex c1,c2,result;
    c1.input();
    c2.input();

    int x;
    cout<<"enter the choice :  1) addition   2) multiplication  3) using <<and>> to print and read complex number \n";
    cin>>x;
    switch (x)
    {
    case 1:
        result=c1+c2;         // real//5  //3  //imag//6  //4
        result.output();
        break;

    case 2:
        result=c1*c2;
        result.output();
        break;

    case 3:
        cout<<"reading the complex number : \n";
        cin>>c1;
        cout<<"printing the complex number : \n";
        cout<<c1;
        break;
    
    default:
        cout<<"invalid output : choose form given choice ! ";
        break;
    }
    
    
    return 0 ;
}