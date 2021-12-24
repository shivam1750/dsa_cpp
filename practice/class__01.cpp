#include <iostream>
using namespace std;

class student
{
    int age;
    float marks;
    char name[20];
    
    public:
    void getdata();
    void display();
};

void student::getdata()
{
    cout<<"Enter age\n";
    cin>>age;
    cout<<"Enter marks\n";
    cin>>marks;
    cout<<"Enter name\n";
    cin>>name;
}
void student::display()
{
    cout<<"age= "<<age<<endl;
    cout<<"name= "<<name<<endl;
    cout<<"marks= "<<marks<<endl;
}



int main(){
    student a;
    a.getdata();
    a.display();

    return 0;
}


// write a program area ,volume of a room in class
//write a prograam get employ data {id , company , name ,designation , salary}