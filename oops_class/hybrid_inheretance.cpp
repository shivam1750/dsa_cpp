//combination of multiple and multilevel inheriance
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
class test:public student//multikevel
{
    public:
    float m1,m2,m3;
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
class sport
{
    public:
    float score;
    void get_data()
    {
        cout<<"Enter your score :  "<<endl;
        cin>>score;
    }
    
};
class result:public test,public sport           //multiple
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
    void put_data()
    {
        cout<<" Your score  is "<<score<<endl;
    }

};
int main(){  
    result s;
    s.get_rollno();
    s.put_rollno();

    s.get_marks();
    s.put_marks();

    s.get_data();

    s.calculate();
    s.display();
    s.put_data();
    return 0;
}