//multi level

#include<iostream>
using namespace std;
#include<iomanip>
class student
{
public:
    int rollno;
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
    protected:
    float m1,m2,m3;
    public:
   // float m1,m2,m3;
    void get_marks()
    {
    cout<<"Enter maarks of three subjects "<<endl;
    cin>>m1>>m2>>m3;
    }
    void put_marks()
    {
    cout<<" Marks are "<<m1<<m2<<m3<<endl;
    }
};

class result:public test
{
    float percent;
    public:
    void calculate()
    {
    percent = ((m1+m2+m2)/300)*100;
    }
    void display()
    {
    cout<<" Percentage is " << percent<<endl;
    }

};

int main()
{
    result r;

    r.get_rollno();
    r.put_rollno();

    r.get_marks();
    r.put_marks();

    r.calculate();
    r.display();
   // cout<<"roll no. is "<<r.rollno<<endl;//variable acces only public member 
    //cout<<"roll no. is "<<r.percent<<endl;//vaiable not acces an private and protected 
    return 0;
}