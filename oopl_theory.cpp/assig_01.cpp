/* 01)  Create a class named Shape with a function that prints "This is a shape" Create
another class named Polygon inheriting the Shape class with the same function that
prints " Polygon is a shape". Create two other classes named Rectangle and Triangle
having the same function which prints "Rectangle is a polygon" and "Triangle is a
polygon" respectively. Again, make another class named Square having the same
function which prints "Square is a rectangle"  */
#include<iostream>
using namespace std;
#include<iomanip>
class shape{
    public:
    void show(){
        cout<<"This is a shape "<<endl;
    }
};
class polygoan: public shape{
    public:
    void show(){
        cout<<"Polygoan is a shape "<<endl;
    }
};
class rectangle{
    public:
    void show(){
        cout<<"rectangle is a polygoan "<<endl;
    }
};
class Triangle{
    public:
    void show(){
        cout<<"triangle is a polygoan "<<endl;
    }
};
class square{
    public:
    void show(){
        cout<<"square is a rectangle "<<endl;
    }
};
int main(){
    polygoan x;
    x.shape::show();
    x.show();

    rectangle y;
    y.show();

    Triangle z;
    z.show();
    
    square w;
    w.show();
    return 0 ;
}