#include<iostream>
using namespace std;
#include<iomanip>
float m1,m2,m3;  //declaration of global variable 
class student
{
public:
    int rollno;
    //float m1,m2,m3;
    void get_rollno()
    {
    cout<<"Enter Rollno "<<endl;
    cin>>rollno;
    }

    void put_rollno()
    {
    cout<<" Roll No is "<<rollno<<endl;
    }
};

class test:public student
{
    public: 
    //float m1,m2,m3;
    void get_marks()
    {
    cout<<"Enter maarks of three subjects "<<endl;
    cin>>m1>>m2>>m3;
    }
    void put_marks()
    {
    cout<<" Marks are "<<m1<<"     "<<m2<<"     "<<m3<<"     "<<endl;
    }
};

class result:public student
{
    public:
    float percent;
    void calculate()
    {
        percent = ((m1+m2+m3)/3);
    }
    void display()
    {
        cout<<" Percentage is " << percent<<endl;
    }

};

int main()
{
    result r;
    test p;

    r.get_rollno();
    r.put_rollno();

    p.get_marks();
    p.put_marks();

    r.calculate();
    r.display();
    return 0;
}