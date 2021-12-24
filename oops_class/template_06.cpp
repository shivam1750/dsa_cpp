//class template with mutliple arrgumrnt 
#include <iostream>
using namespace std;
template<class T1, class T2>
class student
{
    T1 rollno;
    T2 marks;
    public:
    student(T1 x,T2 y)
    {
        rollno = x;
        marks = y;
    }
    void display()
    {
        cout << "Values of a and b are : " << rollno<<" ,"<<marks<<endl;
    }
};
int main()
{
    int r;
    float m;
    cout<<"\nEnter rollno"<<endl;
    cin>>r;
    cout<<"\nEnter marks"<<endl;
    cin>>m;
    student<int,float> d(r,m);
    d.display();
    return 0;
}