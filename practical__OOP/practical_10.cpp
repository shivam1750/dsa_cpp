//write a program which return the largest number of 3 float integers
#include<iostream>
using namespace std;
#include<iomanip>
float max_(float , float , float);
int main(){
    float x,y,z;
    cout<<"enter the three number : \n";
    cin>>x>>y>>z;
    max_(x,y,z);    
    return 0 ;
}

float max_(float m,float n, float o){
    if (m>n && m>o){
        cout<<"the largest floating value is : "<<m;
    }
    else if (n>o && n>m){
        cout<<"the largest floating value is : "<<n;
    }
    else{
        cout<<"the largest floating value is : "<<o;
    }
    return 0;
}