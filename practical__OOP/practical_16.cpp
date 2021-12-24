#include<iostream>
using namespace std;
#include<iomanip>
class A_01{           
public: 
	int length,width; // member variables declared
	A_01(int x,int y){ // parametrized constructor
		length = x; // giving values to constructor
		width = y;
	}
	A_01(A_01& obj){  // copy constructor - 'obj' here is argument | syntax : className (className& objectname)
		length = obj.length; // giving values to copy constructor
		width = obj.width;        
	}
    void Display(){  // display function
    	cout<<" By using copy constructor area is: "<<length*width;  //give output area = len*width;
    }
};6
int main()
{	int m,n;
	cout<<"enter the two no : "<<endl;
	cin>>m>>n;
	A_01 a1(m,n); // parametrized calling
	A_01 a2(a1);  // copy constructor calling
	a2.Display(); // display the output 
    return 0;
}