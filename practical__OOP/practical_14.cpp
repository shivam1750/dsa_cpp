//write a program to calculate a volume of cube using static member function
#include<iostream>
using namespace std;
#include<iomanip>

class volume_cube
{
private:
    int x;
public:
    static int getdata_();
    static int display_();
    
};

int volume_cube:: getdata_(){
    int x;
    cout<<"Enter length \n";
    cin>>x;
    return 0;
}
int volume_cube::display_(){
    int x ;
    cout<<"volume is \n"<<(x*x*x);
    return 0;
}
int main(){
    volume_cube s;
    s.getdata_();
    s.display_();

    return 0 ;
}