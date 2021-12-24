#include <iostream>
using namespace std;
template<class T, int size>
class A
{
    public:
    T arr[size];
    void insert()
    {
        cout<<"Enter Array"<<endl;
        for (int j=0;j<size;j++)
        {
            cin>>arr[j]; 
        }
    }
    void display()
    {
        cout<<"Array is"<<endl;
        for(int i=0;i<size;i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    A<int,10> t1;
    A<float,5> t2;
    cout<<"\nInterger Array"<<endl;
    t1.insert();
    t1.display();
    cout<<"\nfloat Array"<<endl;
    t2.insert();
    t2.display();
    return 0;
}