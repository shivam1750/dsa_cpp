#include<iostream>
#include<conio.h>
using namespace std;
class area
{
    public:
    int r,h, result;

    area() //default constructor : no arrgument 
    {
        cout<<"enter two number : ";
        cin>>r>>h;
        result = r*h;
       cout<<"area by default constructor: "<< result<<endl;
    }
   
    area(int a,int b){        //parametric constructor : the function get input 
       result = a*b;
       cout<<"area by parametric constructor: "<< result;
    }
};
int main()
{
    int a,b;
    cout<<"enter length and breadth: "<<endl;
    cin>>a>>b;
    area v;   // v = object
    area x(a,b);
    
return 0;
}