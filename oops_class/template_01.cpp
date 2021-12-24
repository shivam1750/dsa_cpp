//function template with a single parameter 
#include<iostream>
using namespace std;
#include<iomanip>
//template <class t> t add(t a,t b)
template <class t> t add(t &a,t &b){  // template <class ttype> return type functon name (paramerter list )
                                       // class == generic type in a template declaration 
    t result = a + b;
    return result;
}
int main()
{
    int i,j;
    float x , y;
    cout<<"enter the two integer number : "<<endl;
    cin>>i>>j;
    cout<<"enter the two floating  number : "<<endl;
    cin>>x>>y;
    
    cout<<"the sum of integer is : "<<add(i,j)<<endl;
    cout<<"the sum of floating is : "<<add(x,y)<<endl;
    return 0 ;
}