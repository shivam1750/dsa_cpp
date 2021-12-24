#include<iostream>
using namespace std;
#include<iomanip>
class room
{
private:
    float a;
    float b;
    float c;
public:
    void getdata();
    void volume();
    void area();
    
};

void room::getdata() 
{
    cout<<"Enter length \n";
    cin>>a;
    cout<<"Enter breadth\n";
    cin>>b;
    cout<<"Enter hight\n";
    cin>>c;
}

void room::volume()
{
    int e;
    cout<<"the volume of room is "<<(a*b*c)<<endl;

}
void room::area()
{
    int e;
    cout<<"the area of room is "<<(a*b)<<endl;

}


int main(){
    room f;
    f.getdata();
    f.volume();
    f.area();

    return 0 ;
}