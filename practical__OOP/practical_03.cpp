//3) Write a program to find the class of student from the given marks
#include<iostream>
using namespace std;
#include<iomanip>

int main(){
    float x; 
    cout<<"enter your mark : "<<endl;
    cin>>x;
    cout<<"Score is : ";
   
    if (x<=100 && x>80 )
    {
        cout<<" A+ grade  ";
    }
    else if (x<=80 && x>60)
    {
        cout<<" B grade";
    }
    else if (x<=60 && x>35 )
    {
        cout<<" c grade ";
    }
    else if (x<=35 && x>=0)
    {
        cout<<"you are fail";
    }
    else
    {
        cout<<"your mark doesn't exit ";
    }

    
    return 0 ;
}

