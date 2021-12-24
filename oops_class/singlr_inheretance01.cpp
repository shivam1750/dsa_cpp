/*Write a program to read and print student information using two classes - person(name,place_of_birth, 
getdata(),putdata()) and student(rollno,marks_1,marks_2,marks_3,display(),calculate_marks())
*/
#include<iostream>
using namespace std;
#include<iomanip>
class person  //base class
{
public:
    char name[200] , place_of_birth[200];
    void getdata(){
        cout<<"Enter the student name : "<<endl;
        cin>>name;
        cout<<"Enter the student place of birth : "<<endl;
        cin>>place_of_birth;
    }

    void putdata(){
        cout<<"\nYOUR NAME IS :   "<<name <<endl;
        cout<<"YOUR PLACE OF BIRTH IS :   "<<place_of_birth<<endl;

    }
};



class student:public person{  //derived class
    public: 
    int roll;
    float M1,M2,M3;
    void display(){
        cout<< "your roll no. is "<<endl;
        cin>>roll;

        cout<<"Enter the subject marks of given 3 subject : "<<endl;

        cout<<"Enter the DM marks : "<<endl;
        cin>>M1;
        cout<<"Enter the OOP marks : "<<endl;
        cin>>M2;
        cout<<"Enter the FDS marks : "<<endl;
        cin>>M3;

    }
    void calculate(){
        float per,x;

        x=(M1+M2+M3)*100;
        per = (x/300);
        cout<<"the percentage is : \n"<<per<<"%";
    }
};

int main(){
    student m;
//BASIC INFO
    m.getdata();
    m.putdata();

//STUDENT DETAIL
    m.display();
    m.calculate();
    return 0 ;
}
//Encapsulation == he wrapping up of data under a single unit.  or   it is data to hide form user 
