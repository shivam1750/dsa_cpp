//write a program to calculate the volume of a cube and cylinder using function overloading
#include<iostream>
using namespace std;
#include<iomanip>

float volume_(float);
float volume_(float,float);
int main(){
    float x,y,z;
    cout<<"enter the length : "<<endl;
    cin>>x;
    cout<<"the voume of cube is : "<<volume_(x);


    cout<<"\nenter the radius : "<<endl;
    cin>>y;
    cout<<"enter the height : "<<endl;
    cin>>z;

    cout<<"the voume of cube is : "<<volume_(y,z);
    return 0 ;
}
float volume_(float x){
    return x*x*x;
}
float volume_(float y , float z){
    return 3.14*y*y*z;
}