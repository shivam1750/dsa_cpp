#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    int abc = 500;
    int &xyz = abc;
    cout<<"value of abc : \n "<<abc;
    cout<<"\nvalue of xyz : \n "<<xyz;

    abc=1000;
    cout<<"\nvalue of abc : \n "<<abc;
    cout<<"\nvalue of xyz : \n "<<xyz;

    xyz=2000;
    cout<<"\nvalue of abc : \n "<<abc;
    cout<<"\nvalue of xyz : \n "<<xyz;

    return 0 ;
}