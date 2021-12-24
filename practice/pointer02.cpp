//Programs for pointers
//1. Initialise and display using pointers
/*
#include <iostream>
using namespace std;
int main() {
// Write C++ code here
    int x, *y;
    cout<<"Enter value of x";;
    cin>> x;
    y=&x;
    cout<< "Value of X " << x << endl ;
    cout<< "Value of Y" <<*y << endl;
return 0;
}
*/

//2. Strings and pointers
/*
#include <iostream>
using namespace std;
int main()
{
    char str[]="AI and DS";
    char *sp;
    sp=str;
    cout<<"String displayed without pointer"<< str << endl;
    cout<<"String displayed with pointer " <<   sp << endl;
    return 0;
}
*/

//3. Array of characters of pointers
/*
//01
#include <iostream>
using namespace std;
int main()
{
int i;
char *str=(char *)"AI DS Mechanical Civil Computer";

    cout<<"Array of Strings: "<<endl;
    for(i=0;i&lt;5;i++)
        cout<<str[i]<<" " ;
    return 0;
}
//02
#include <iostream>
using namespace std;
int main()
{
int i;
char *str={"AI","DS", "Mechanical"," Civil","Computer"};

    cout<<"Array of Strings: "<<endl;
    for(i=0;i&lt;5;i++)
        cout<<str[i]<<" " ;
    return 0;
}
*/

//3. Pass by Value
/*
#include <iostream>
using namespace std;
void swap(int m,int n)
{
    int temp;
    temp=m;
    m=n;
    n=temp;
    cout<<"After swapping Value of num1 and num2 : "<<m<<"  "<<n<<endl;
}
int main()
{
    int num1=10,num2=20;
    cout<<"before swapping Value of num1 and num2 : "<<num1<<"   "<< num2<<endl;
    swap(num1,num2);

return 0;
}
*/

//4. Function returning pointers
/*
#include <iostream>;
using namespace std;
int *min(int &x,int &y)
{
    if(x<y)
        return(&x);
    else
        return(&y);
}
int main()
{
    int num1,num2,*p;
    cout<<"Enter value of num1 ";
    cin>>num1;
    cout<<"Enter valule of num2 ";
    cin>>num2;
    p=min(num1,num2);
    cout<<"\nMinimum of two numbers is "<<*p <<endl;
    return 0;
}
*/

//5. Pointers to objects
/*
#include <iostream>
using namespace std;
class student
{
    int rollno;
    char name[20];
    public : 
            void getdata()
            {
                cout << "Enter rollno ";
                cin>>rollno;
                cout << "Enter name ";
                cin>>name;
            }
            void putdata()
            {
                cout << "\nRollno  ";
                cout<<rollno;
                cout << "\nName  ";
                cout<<name;
            }
};
int main(){
    student s1, *sp; 
    sp=&s1;
    s1.getdata();
    sp->putdata();
    return 0;
}
*/

//10. Null pointer
/*
#include <iostream>
using namespace std;
int main() {
    int *p= NULL;//initialize the pointer as null.
    printf("The value of pointer is %u",p);
    return 0;
}
*/

//11. Void pointers
/*
#include <iostream>
int main()
{
    void *ptr = NULL; //void pointer
    //size of void pointer
    printf("size of void pointer = %d\n\n",sizeof(ptr));
}
*/

//12. New and delete operator

#include <iostream>
using namespace std;
int main()      
{
    int num,i;
    cout<<"Enter total number of students ";
    cin>> num;  
    float *ptr;
    ptr = new float[num];
    cout<<"Enter SGPA of students "<< endl;
    for (i=0;i<num;++i)
    {
        cout<<" Student "<< i+1 <<" : ";
        cin>> *(ptr+i);
    }
    cout<<"\n SGPA of students"<< endl;
    for (int i=0;i<num;++i)
    {
        cout<<"Student "<< i+1 <<" : ";
        cout<< *(ptr+i) <<endl;
    }
    delete [] ptr;
    cout <<"\n SGPA of students "<<endl;
    for (int i=0;i<num;++i)
    {
        cout<<"Student "<< i+1 <<" : " ;
        cout<< *(ptr+i) <<endl;
    }
    return 0;
}