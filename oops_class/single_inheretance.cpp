#include<iostream>
using namespace std;
#include<iomanip>
//base class
class shape
{
public:
    void setwidth(){}
    void setwidth(int w ){
        width = w;
    }
    void setheight(int h ){
        height = h;
    }
    protected:
    int width;
    int height;
};
//derived class
class reactangle:public shape{
    public:
    int getarea(){
        return(width*height);
    }
};
int main(){
    reactangle rect;
    float x,y;
    cout<<"enter the width"<<endl;
    cin>>x;
    cout<<"enter the height"<<endl;
    cin>>y;
    rect.setwidth(x);
    rect.setheight(y) ;
    cout<<"total area: "<<rect.getarea()<<endl;
    
    return 0 ;
}
