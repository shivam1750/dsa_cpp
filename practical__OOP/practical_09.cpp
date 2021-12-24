//write a program which return square of integers from 1 to 10 (using function )
#include<iostream>
using namespace std;
#include<iomanip>

int square(int x){
    int y;
    y=x*x;
    return y;
}
int main(){
    int n=10;
    for (int x = 1;x<=n; x++)
    {
        
        cout<<"the square "<<x<<" is " <<"= "<<square(x)<<endl;
    }
    
    return 0 ;
}
/*
int display(int );
int main()
{
    int  x; 
    cout<<"enter the no. x : \n";
    cin>>x;
    display(x);

    return 0;
}
int display(int y)
{
    
    cout<<"square of x : "<<y*y;
    
    
}*/