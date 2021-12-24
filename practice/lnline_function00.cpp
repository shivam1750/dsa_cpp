#include<iostream>
using namespace std;
#include<iomanip>

// NOTE :  INLINE FUNCTION USE ONLY WHEN THEIR IS VERY LESS PROGRAM OPERATION WILL WORK
inline int sum(int a , int b){
    int c = (a + b);
    return c;

}

// in inline function >>>> the recursion and statics variable is not used
/*
inline int sum(int a , int b){
    static int c = 0;   // STATIC : the hole function is run only one time 
    c=c+1;              //in this case c = 0
    return a*b+c;

}
*/

int main(){
    int a,b;
    cout <<"enter the value of a & b: "<<endl;
    cin>>a>>b;
   
   cout<<"the sum of the two number is : "<<sum(a,b)<<endl;
    
    return 0 ;
}